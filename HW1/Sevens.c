#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int count = 0;

    scanf("%d", &x);

    y=x;

    while(y!=0){
        if(y % 10 == 7)
            count ++;
        y = y/10;
    }

    printf("Number %d contains %d 7\n",x, count);

    return 0;
}
