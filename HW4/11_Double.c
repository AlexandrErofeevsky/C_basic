#include <stdio.h>
#include <string.h>

int str_len(const char *str)
{
    int i = 0;

    while (str[i] !='\0')
        i++;

    return i;
}

char* twice_str(char *s)
{
    int i = 0;
    int len = str_len(s);
    char *str = malloc(len*2+1);

    while (s[i] !='\0'){
        str[i]=s[i];
        str[i+len] = s[i];
        i+=1;
    }

    return str;
}


int main()
{
    printf(twice_str("Good morning "));

    return 0;
}
