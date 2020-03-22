#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
    int a[N]; /* массив a размера N */
    int b[] = {1,2,3,4,5,5,4,3,2,1};
    int i,boole;    /* счетчик */
    srand(time(NULL)); /* начальное значение генератора ПСЧ */

    boole = 1;
    /* Array a */
    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf(" %d", a[i]);
    }
    printf(";\n");
    for(i=0;i<N;i++){
        if(a[i] != a[N-i-1]){
            boole = boole*0;
        }
    }
    if(boole == 1){
        printf("Array is symmetric\n");
    }
    else{
        printf("Array is not symmetric\n");
    }
    /* Array b */
    boole = 1;
    for(i = 0; i < N; i++){
        printf(" %d", b[i]);
    }
    printf(";\n");
    for(i=0;i<N;i++){
        if(b[i] != b[N-i-1]){
            boole = boole*0;
        }
    }
    if(boole == 1){
        printf("Array is symmetric\n");
    }
    else{
        printf("Array is not symmetric\n");
    }
    return 0;
}
