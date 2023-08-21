#include "main.h" 
 /**
 * _strlen - function that returns the length of a string.
 * @s: The string we want to now it's length 
 *
 */
 int _strlen(char *s){
   int cou, i;
while (s[i]!= '\0')
 {
 i++;
 cou++;
 }
return (cou);
}
