#include <stdio.h>
#include <string.h>

int str_len(const char *str)
{
    int i = 0;

    while (str[i] !='\0')
        i++;

    return i;
}
char* clay_str(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int len1 = str_len(s1);
    int len2 = str_len(s2);
    char *str = malloc(len1+len2+1);

    while (s1[i] !='\0'){
        str[i]=s1[i];
        i+=1;
    }
    while (s2[j] !='\0'){
        str[i+j] = s2[j];
        j+=1;
    }
    return str;
}


int main()
{
    printf("%s\n",clay_str("Hello! ", "How are you?"));

    return 0;
}
