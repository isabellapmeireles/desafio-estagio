/* 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores a
nteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, 
informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado 
pertence ou não a sequência. 

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente 
definido no código; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");
  long vetFib[1000]; 
  long i, numDig;
  int cont = 0;

  vetFib[0] = 0;  
  vetFib[1] = 1;

  printf("Digite um número para saber se ele pertence a sequencia de fibonacci ");
  scanf("%ld", &numDig);

  for (i = 2; i < 1000; i++) {
    vetFib[i] = vetFib[i - 1] + vetFib[i - 2];
    if (vetFib[i] == numDig){
      printf("O número %ld está dentro da sequência de fibonacci!\n", numDig);
      cont++;
      break;
    }
  }
  if (cont == 0) {
    printf("O número %ld NÃO está na sequência de Fibonacci!\n", numDig);
  }
  system("pause");
}
