#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i,mini;    /* ������� */
  double r,min,v;
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf(" %d", a[i]);
  }
  printf(";\n");

  printf("Enter the number: ");
  scanf("%lf",&r);
  mini = 0;
  min = fabs(a[0]-r);

  for(i = 0; i < N; i++){
    v = fabs(a[i]-r);
    if(v<min){
      mini = i;
      min = v;
    }
  }

printf("The most close number is %d, minimal delta is %f ", a[mini], min);
  return 0;
}
