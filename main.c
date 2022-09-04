#include <stdlib.h>
#include <stdio.h>

int main()
{
 int numI = 1234;
 float numF = 12.30;
 char letra = 'G';
 char palavras[10] = {"tudo bem??"};

 printf("%d\n", numI);
 printf("%f\n", numF);
 printf("%c\n", letra);
 printf("%s\n", palavras);

 // Todos os scanf devem ser passado o ponteiro(Endereço de memória) com & exceto os do tipo string
 // porque um vetor de string já é um ponteiro.
 printf("Digite um numero inteiro\n");
 scanf("%d", &numI); //

 printf("Digite um numero float\n");
 scanf("%f", &numF);

 printf("Digite uma letra\n");
 scanf(" %c", &letra);

 printf("Digite duas palavras\n");
 // scanf("%s", palavras); //Vai ler até encontrar o primeiro espaço
 // scanf(" %[^\n]", palavras); //Vai dar o erro no compilador * stack smashing detected * vulnerabilidade severa
 scanf(" %10[^\n]", palavras); // Vai ler até o tamanho determinado e com espaços em branco

 printf("%d\n", numI);
 printf("%f\n", numF);
 printf("%c\n", letra);
 printf("%s\n", palavras);

 return 0;
}
