#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  double a[N]; /* ������ a ������� N */
  double sum;
  int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  sum = 0;
  for(i = 0; i < N; i++){
    a[i] = rand();
    sum += a[i];
    printf("%f\n", a[i]);
  }

  printf("Average = %f\n", sum/N);

  return 0;
}
