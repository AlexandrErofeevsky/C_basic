#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int count = 2;
    int total = 1;

    while(count <=n){
        total = total * count;
        count ++;
    }

    printf("%d! = %d\n", n, total);
}

int main()
{
    int x;

    scanf("%d", &x);
    factorial(x);
    return 0;
}
