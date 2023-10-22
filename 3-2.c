#include <stdio.h>
 
int main()
{
    char symbol = 127;
    printf("%d\n", symbol);
    symbol = symbol + 1;
    printf("%c, %d\n", symbol, symbol);
    return 0;
}
