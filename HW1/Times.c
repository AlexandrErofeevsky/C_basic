#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int n=1;
    int total = 1;
    scanf("%d %d", &x, &y);
    while(n<=y){
        total = total * x;
        n++;
    }
    printf("%d %d times is %d\n",x, y, total);
    return 0;
}
