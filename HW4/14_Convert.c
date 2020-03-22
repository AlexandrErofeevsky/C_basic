#include <stdio.h>

int str_len(const char *str)
{
    int i = 0;

    while (str[i] !='\0'){
        i++;
    }
    return i;
}

int fatoi(const char *s)
{
    int n = 0;
    char *current_str = s;
    while(*current_str){
        n = n*10 + (*current_str++ - '0');
    }
    return n;
}


int main()
{
    char str[] = "54321";

    printf("%d\n",fatoi(str));

    return 0;
}
