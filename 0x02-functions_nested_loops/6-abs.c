#include "main.h"
/**
 *_abs - write  absolute value of an integer
 *return : absolute value 
 */
int _abs(int n ){
   
    if (n < 0)
	{
	    int asb;
    asb=n * -1; 
    return(asb);
	}
    else
    {
      return(n);
    }
}
