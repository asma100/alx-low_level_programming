#include "main.h" 
 /**
 * _strlen - function that returns the length of a string.
 * @s: The string we want to now it's length 
 *
 */
 int _strlen(char *s){
 int i;
 int cou = 0;
while (*s != '\0')
 {
 s++;
 cou++;
 }
return (cou);
}
