#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
    double a[N];/* ������ a ������� N */
    double b[N];
    int i,j;    /* ������� */
    double v;
    srand(time(NULL)); /* ��������� �������� ���������� ��� */

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
