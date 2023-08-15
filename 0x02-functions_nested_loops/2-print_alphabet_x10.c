#include "main.h"
/**
 *main-prints                                                                                                                                                           *Return:0
 */
void print_alphabet_x10(void){
  int i;  
    for( i=0;i<10;i++)
    {
   char first = 'a';
char end = 'z' ;
char alpha = first ;
 while(alpha <= end)
  {
     _putchar(alpha);
     alpha++;
  }
  _putchar('\n');
    }
}
