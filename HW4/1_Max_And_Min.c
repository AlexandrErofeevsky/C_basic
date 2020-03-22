#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i,v,mini,maxi;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf(" %d", a[i]);
  }
  printf(";\n");
  mini = 0;
  maxi = 0;

  for(i = 0; i < N; i++){
    if(a[mini]>a[i]){
      mini = i;
    }
    if(a[maxi]<a[i]){
      maxi = i;
    }
  }
  v = a[maxi];
  a[maxi] = a[mini];
  a[mini] = v;
  printf("New list:\n");
  for(i = 0; i < N; i++){
    printf("%d ", a[i]);
  }
  return 0;
}
