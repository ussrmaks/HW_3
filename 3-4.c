#include <stdio.h>
int main ()
{
int a = 2;
int b = 0;

a=a*a; // a=a^2
b=a*a; // b=a^4
printf("a^4 = %d\n",b);
b=b*b; // b=a^8
b=b*a; // b=a^10
printf("a^10 = %d\n",b);
return 0;
}
