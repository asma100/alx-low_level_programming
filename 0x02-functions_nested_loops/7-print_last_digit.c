#include "main.h"
/**
 *_abs - Computes the absolute value of an integer
 *@c:  computed number 
 *Return: Absolute value or 0
 */
 int print_last_digit(int n){
      
    
    int  v ,val ;
    if (n < 0)
        {
          
    v = n * -1;
   _putchar(v%10+'0');
    val=v%10;
    return (val);
        }
 else
 {
v=n;
   _putchar(v%10+'0');
    val=v%10;
    return (val);
 }
 }
