#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

 char *s = malloc(1024 * sizeof(char));
 scanf("%80[^\n]", s);
 int tamFrase = (int)strlen(s);
 if (!tamFrase)
 {
  perror("Frase vazia!");
  return 1;
 }
 s = realloc(s, tamFrase + 1);

 for (int i = 0; i < tamFrase; i++)
 {
  printf("%c", s[i]);

  if (s[i] == ' ')
  {
   printf("\n");
  }
 }

 free(s);

 return 0;
}