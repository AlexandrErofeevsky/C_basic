#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
    int a[] = {2,3,4,5,6,7,7,8,9,9}; /* ������ a ������� N */
    int b[] = {1,2,3,4,5,5,6,7,8,9};
    int count,i,j,boole;    /* ������� */
    srand(time(NULL)); /* ��������� �������� ���������� ��� */

    for(i = 0; i < N; i++){
        printf(" %d", a[i]);
    }
    printf(";\n");
    for(i = 0; i < N; i++){
        printf(" %d", b[i]);
    }
    printf(";\n");

    count = 0;
    for(i=0;i<N;i++){
        boole = 0;
        if(i==0||a[i]!=a[i-1]){
            for(j=0;j<N;j++){
                if(a[i]==b[j]){
                    boole++;
                }
            }
            if(boole>0){
                count++;
            }
        }
    }
    printf("Number of different common numbers is %d", count);
    return 0;
}
