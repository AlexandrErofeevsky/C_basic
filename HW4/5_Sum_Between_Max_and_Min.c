#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
    int a[N]; /* ������ a ������� N */
    int i,sum,mini,maxi;    /* ������� */
    srand(time(NULL)); /* ��������� �������� ���������� ��� */

    /* Array a */
    for(i = 0; i < N; i++){
        a[i] = rand()%100;
        printf(" %d", a[i]);
    }
    printf(";\n");

    mini = 0;
    maxi = 0;
    sum = 0;
    for(i = 0; i < N; i++){
        if(a[mini]>a[i]){
            mini = i;
        }
        if(a[maxi]<a[i]){
            maxi = i;
        }
    }

    if(maxi>mini){
        for(i=mini;i<maxi;i++){
            sum+=a[i];
        }
        sum = sum - a[mini];
    }
    else{
        for(i=maxi;i<mini;i++){
            sum+=a[i];
        }
        sum = sum - a[maxi];
    }
    printf("Sum of elements between min and max is %d",sum);
    return 0;
}
