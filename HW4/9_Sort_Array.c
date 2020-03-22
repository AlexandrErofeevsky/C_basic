#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
    double a[N];/* массив a размера N */
    double b[N];
    int i,j;    /* счетчик */
    double v;
    srand(time(NULL)); /* начальное значение генератора ПСЧ */

    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf(" %f", a[i]);
    }
    printf("\n");

    for(i = 0; i < N; i++){
        b[i]=a[i];
    }
    for(i = 0; i < N; i++){
        for(j = 1; j < N; j++){
            if(b[j-1]>b[j]){
                v = b[j-1];
                b[j-1] = b[j];
                b[j] = v;
            }
        }
    }
    for(i = 0; i < N; i++){
        printf(" %f", b[i]);
    }
    return 0;
}
