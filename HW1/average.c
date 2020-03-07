#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int total = 0;
    int count = 1;

    while(count<=5){
        scanf("%d", &n);
        total = total + n;
        count ++;
    }
    printf("Average is %d!\n", total/5);
    return 0;
}
