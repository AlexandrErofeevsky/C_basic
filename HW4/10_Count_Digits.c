#include <stdio.h>

int count_digits(char *s)
{
    int count = 0;
    int i = 0;

    while (s[i] !='\0'){
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
            count+=1;
        }
        i+=1;
    }
    return count;
}


int main()
{
    char s[] = "H1e2l3l4o5!";

    printf("%d\n", count_digits(s));

    return 0;
}
