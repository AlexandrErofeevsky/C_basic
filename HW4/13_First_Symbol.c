#include <stdio.h>
#include <string.h>

int str_len(const char *str)
{
    int i = 0;

    while (str[i] !='\0')
        i++;

    return i;
}
char *position(char *s, char c)
{
    int i = 0;
    int len = str_len(s);

    while (s[i] != c && i != len){
        i+=1;
    }
    return i+1;
}


int main()
{
    char str[] = "Hello! How low?";
    char symb = 'w';

    printf("%d\n",position(str, symb));

    return 0;
}
