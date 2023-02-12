#include <stdio.h>
int main(void)
{
    int x, y;
    for(x=0, y=10; x<=10 && y>=0; x++, y--)
    {
        printf("x = %d\t y = %d\n", x, y);
    }
    return 0;
}

