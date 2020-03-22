#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  double a[N]; /* массив a размера N */
  double sum;
  int i;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  sum = 0;
  for(i = 0; i < N; i++){
    a[i] = rand();
    sum += a[i];
    printf("%f\n", a[i]);
  }

  printf("Average = %f\n", sum/N);

  return 0;
}
