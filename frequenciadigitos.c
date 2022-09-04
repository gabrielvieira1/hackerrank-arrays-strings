#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 char *s = (char *)malloc(sizeof(char) * 1024);
 scanf("%[^\n]", s);
 int arr[10] = {0};
 
 for (int i = 0; i < strlen(s); i++)
 {
  if (s[i] >= '0' && s[i] <= '9')
  {
   arr[s[i] - 48]++;
  }
 }
 for (int i = 0; i < 10; i++)
  printf("%d ", arr[i]);

 free(s);

 return 0;
}