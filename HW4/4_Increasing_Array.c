#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
    int a[]={1,1,1,2,3,3,3,3,4,5}; /* массив a размера N */
    int b[]={1,2,3,4,5,6,7,9,5,3};
    int i,boole;    /* счетчик */

    /* Array a */
    for(i = 0; i < N; i++){
        printf(" %d", a[i]);
    }
    printf(";\n");

    boole = 1;
    for(i = 1; i < N; i++){
        if(a[i-1]>a[i]){
            boole = boole*0;
        }
    }
    if(boole == 1){
        printf("Array is increasing\n");
    }
    else{
        printf("Array is not increasing\n");
    }

    /* Array b */
    for(i = 0; i < N; i++){
        printf(" %d", b[i]);
    }
    printf(";\n");

    boole = 1;
    for(i = 1; i < N; i++){
        if(b[i-1]>b[i]){
            boole = boole*0;
        }
    }
    if(boole == 1){
        printf("Array is increasing\n");
    }
    else{
        printf("Array is not increasing\n");
    }
    return 0;
}
