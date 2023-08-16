#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)

{
int hour, minute;
char hour_str[3], minute_str[3];
    
for (hour = 0; hour <= 23; hour++)
{
hour_str[0] = '0' + (hour / 10);
hour_str[1] = '0' + (hour % 10);
for (minute = 0; minute <= 59; minute++)
{
minute_str[0] = '0' + (minute / 10);
minute_str[1] = '0' + (minute % 10);
           
            
_putchar(hour_str[0]);
_putchar(hour_str[1]);
_putchar(':');
_putchar(minute_str[0]);
_putchar(minute_str[1]);
          
_putchar('\n');
            
if (hour == 23 && minute == 59)
{
break; 
}
}
}
}    
