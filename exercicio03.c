/*3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne: 
• O menor valor de faturamento ocorrido em um dia do mês; 
• O maior valor de faturamento ocorrido em um dia do mês; 
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. 

IMPORTANTE: 
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal; 
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média; */

#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");
  
  int i;
  double fat[30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.261, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
  double menorFat = fat[0];

  //Esta estrutura de repetição foi usada para descobrir o menor valor. 
  for(i = 0; i < 30; i++){
    if (fat[i] != 0 && fat[i] < menorFat) {
      menorFat = fat[i];
    } else {
      continue;
    }
  }
  printf("O menor valor faturado foi de R$%.2f\n\n", menorFat);

  //Esta estrutura de repetição foi usada para descobrir o maior valor.

  double maiorFat = fat[0];

  for(i = 0; i < 30; i++) {
    if(fat[i] != 0 && fat[i] > maiorFat){
      maiorFat = fat[i];
    } else {
      continue;
    }
  }
  printf("O maior faturamento foi de R$%.2f\n\n", maiorFat);

   //Cálculo da média ignorando os dias que não teve faturamento. 
  double soma = 0;
  int cont = 0;

  for (i = 0; i < 30; i++){
    if (fat[i] > 0){
      cont++;
      soma = soma + fat[i];
    } else {
      continue;
    }
  } 
   double media = soma / cont;
  printf("A média dos faturamentos foi R$%.2f\n\n", media);
} 
