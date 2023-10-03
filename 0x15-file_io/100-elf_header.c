#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"
void print_elf_header(Elf64_Ehdr *ehdr) {
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x\n", ehdr->e_ident[EI_MAG0], ehdr->e_ident[EI_MAG1], ehdr->e_ident[EI_MAG2], ehdr->e_ident[EI_MAG3]);
printf("  Class:   %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:    %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
  printf("  Version: %d (current)\n", ehdr->e_ident[EI_VERSION]);
  printf("  OS/ABI:  %s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
  printf("  ABI Version: %d\n", ehdr->e_ident[EI_ABIVERSION]);
  printf("  Type:    %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : "unknown");
  printf("  Entry point address: 0x%lx\n", ehdr->e_entry);
}

int main(int argc, char *argv[]) {
  int fd;
Elf64_Ehdr ehdr;
  if (argc != 2) {
    fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
    return (98);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd < 0) {
    fprintf(stderr, "Error: Could not open file '%s'\n", argv[1]);
    return (98);
  }

  lseek(fd, 0, SEEK_SET);
  read(fd, &ehdr, sizeof(Elf64_Ehdr));

  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
    fprintf(stderr, "Error: File '%s' is not an ELF file\n", argv[1]);
    close(fd);
    return (98);
  }

  print_elf_header(&ehdr);

  close(fd);

  return (0);
}
