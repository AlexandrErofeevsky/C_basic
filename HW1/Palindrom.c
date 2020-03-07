#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    if((x%10)==(x/10000)&&((x/1000)%10)==((x%100)/10))
        printf("%d is a palindrom\n",x);
    else
        printf("%d is not a palindrom\n",x);

    return 0;
}
