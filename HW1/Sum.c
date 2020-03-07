#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
    int total = 0;
    while(n<=10){
        total = total + n;
        n++;
    }
    printf("Sum is %d\n",total);
    return 0;
}
