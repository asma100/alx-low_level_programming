#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

void print_error(char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

int main(int argc, char **argv) {
  int fd, i;
    ssize_t nread;
    Elf64_Ehdr ehdr;
    char *filename = argv[1];

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error(strerror(errno));
    }

    nread = read(fd, &ehdr, sizeof(ehdr));
    if (nread == -1) {
        print_error(strerror(errno));
    }
    if (nread != sizeof(ehdr)) {
        print_error("Failed to read ELF header");
    }

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr.e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("Invalid class\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown class\n");
    }

    printf("  Data:                              ");
    switch (ehdr.e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("Invalid data encoding\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown data encoding\n");
    }

    printf("  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("Compaq TRU64 UNIX\n");
            break;
        case ELFOSABI_ARM_AEABI:
            printf("ARM EABI\n");
            break;
        default:
            printf("Unknown OS/ABI\n");
    }

    printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (ehdr.e_type) {
        case ET_NONE:
            printf("No file type\n");
            break;
        case ET_REL:
            printf("Relocatable file\n");
            break;
        case ET_EXEC:
            printf("Executable file\n");
            break;
        case ET_DYN:
            printf("Shared object file\n");
            break;
        case ET_CORE:
            printf("Core file\n");
            break;
        default:
            printf("Unknown file type\n");
    }

    printf("  Entry point address:               0x%lx\n", ehdr.e_entry);

    return 0;
}
