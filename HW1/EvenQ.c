#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Number %d is even\n", n);
    else
        printf("Number %d is odd\n", n);
    return 0;
}
