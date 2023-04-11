#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = a - b;
    d = 0;
    if (c > 0)
    {
        printf("%d", c);
    }
    else if (c == 0)
    {

        printf("%d", d);
    }
    else if (c < 0)
    {
        printf("%d", d);
    }

    return 0;
}