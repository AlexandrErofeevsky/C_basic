#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
    int a[N]; /* ������ a ������� N */
    int i,boole;    /* ������� */
    srand(time(NULL)); /* ��������� �������� ���������� ��� */

    /* Array a */
    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf(" %d", a[i]);
    }
    printf(";\n");

    boole = 1;

    if(a[0]%2 == 0){
        for(i=1;i<N;i++){
            if(i%2 == 0 && a[i]%2 == 1){
                boole = boole*0;
            }
            if(i%2 == 1 && a[i]%2 == 0){
                boole = boole*0;
            }
        }
    }
    else{
        for(i=1;i<N;i++){
            if(i%2 == 0 && a[i]%2 == 0){
                boole = boole*0;
            }
            if(i%2 == 1 && a[i]%2 == 1){
                boole = boole*0;
            }
        }
    }
    if(boole == 1){
        printf("Array is evenodd");
    }
    else{
        printf("Array is not evenodd");
    }
    return 0;
}
