#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i,sum;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  sum = 0;
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    sum += a[i];
    printf("%d\n", a[i]);
  }

  printf("Sum = %d\n", sum);

  return 0;
}
