#include <stdio.h>
int main()
{
    int num, first_digit, secound_digit;
    scanf("%d", &num);
    first_digit = num / 10;

    secound_digit = num % 10;
    if (first_digit % secound_digit == 0 || secound_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
