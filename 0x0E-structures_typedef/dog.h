#ifndef Asma
#define Asma
/**
 * struct dog - dog withe the following elements:
 *
 * @name: Second member
 * @age: Third member
 * @owner: forth member
 */
typedef struct dog
{
char *name;
float  age;
char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
