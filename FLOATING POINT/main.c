#include <stdio.h>


int main(VOID)
{

   float a = 0;
    while (a <= 100)
 {
   printf("%6.2f degrees f = %6.2f  degrees C/n",
   a, (a - 32.0) * 5.0 / 9.0);
   a = a + 10;
 }

   return 0;
}
