#include <stdio.h>

/* strlen() */
int str_len(const char *str)
{
    int i = 0;

    while (str[i] !='\0')
        i++;

    return i;
}


int main()
{
    char s[] = "Hello!";

    printf("%d\n", str_len(s));

    return 0;
}
