#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int x;

    a = 2;
    b = 1;
    x = -10;

    printf ("1) A:%d B:%d X:%d\n", a, b, x);

    b = a + 3;
    x = b / a;

     printf ("2) A:%d B:%d X:%d\n", a, b, x);

     return 0;

}