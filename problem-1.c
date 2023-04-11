#include <stdio.h>
int main()
{
    char name;
    scanf("%c", &name);
    if (name >= 97 && name < 122)
    {
        char ch = name + 1;
        printf("%c", ch);
    }
    else if (name == 122)
    {
        char cha = 97;
        printf("%c", cha);
    }
    return 0;
}