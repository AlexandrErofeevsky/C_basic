#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[]={1,1,1,2,3,3,3,3,4,5}; /* ������ a ������� N */
  int i,j,max,current,count;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  for(i = 0; i < N; i++){
    printf(" %d", a[i]);
  }
  printf(";\n");

  max = 0;
  for(i = 0; i < N; i++){
    current = a[i];
    count = 0;
    for(j = 0; j < N; j++){
      if(a[j]==current){
        count+=1;
      }
    }
    if(count>max){
      max = count;
    }

  }

printf("The most frequent number occurs %d times",max);
  return 0;
}
