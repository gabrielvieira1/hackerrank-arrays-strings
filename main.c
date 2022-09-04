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
 /* Riscos de usar o Scanf 
 
 O scanf por padrão só ler até o primeiro espaço e não se preocupa com o tamanho do vetor e pode 
 acabar lendo mais caracteres do que o tamanho do vetor.

 */
 printf("Digite um numero inteiro\n");
 scanf("%d", &numI); //

 printf("Digite um numero float\n");
 scanf("%f", &numF);

 printf("Digite uma letra\n");
 //scanf("%c", &letra); // Buffer do teclado ->45\n12.40\n (Letra está sendo preenchida pelo espaço em branco
 scanf(" %c", &letra); // Corrigimos adicionando um espaço em branco na frente da mascara. Desonsidera enter, espaço ou tab.

 printf("Digite duas palavras\n");
 // scanf("%s", palavras); //Vai ler até encontrar o primeiro espaço
 // scanf(" %[^\n]", palavras); //Vai dar o erro no compilador * stack smashing detected * vulnerabilidade severa
 //scanf(" %10[^\n]", palavras); // Vai ler até o tamanho determinado e com espaços em branco (Segura)

 // Lendo com get
 //gets(palavras); // O uso de gets pode levar a graves vulnerabilidades de buffer overflow. Use a alternativa segura fgets.
 fgets(palavras, 10, stdin); // só vai ler o tamanho - 1 (Segura) Precisa aplicar mascara no stdin para espaços em branco

 printf("%d\n", numI);
 printf("%f\n", numF);
 printf("%c\n", letra);
 printf("%s\n", palavras);

 return 0;
}
