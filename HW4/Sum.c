#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i,sum;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  sum = 0;
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    sum += a[i];
    printf("%d\n", a[i]);
  }

  printf("Sum = %d\n", sum);

  return 0;
}
