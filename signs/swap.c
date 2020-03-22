#include <stdio.h>

int swap(int *px, int *py)
{
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}


int main()
{
    int a,b;
    int *x;
    int *y;

    a = 5;
    b = 6;
    x = &a;
    y = &b;
    swap(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
