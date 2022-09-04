#include <stdlib.h>
#include <stdio.h>

int main()
{
 int num, *arr, i;
 scanf("%d", &num);
 arr = (int *)malloc(num * sizeof(int));

 for (int i = 0; i < num; i++)
 {
  scanf("%d", arr + i);
 }

 int count = num;

 for (int i = 0; i < num; i++)
 {
  if (i == (count - 1) || i == count )
  {
   break;
  }

  int ult = arr[count - 1];
  int pri = arr[i];
  arr[i] = ult;
  arr[count - 1] = pri;
  count--;
 }

 for (int i = 0; i < num; i++)
 {
  printf("%d ", *(arr + i));
  // printf("%d ", arr[i]);
 }

 return 0;
}