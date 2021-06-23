#include <stdio.h>

int main(void)
{
    int i, b, g, c, h;

    for (i = 1; i < 11; ++i)
    {
        printf("%d ", i);
    }
    
    b = 3;
    g = b++;
    c = 3;
    h = ++c;

    printf("\n%d==%d\n", g, h);
    printf("b = %d\n", b);
    return (0);
}
