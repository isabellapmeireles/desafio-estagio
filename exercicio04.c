/*4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado: 
•	SP – R$67.836,43 
•	RJ – R$36.678,66 
•	MG – R$29.229,88 
•	ES – R$27.165,48 
•	Outros – R$19.849,53 
Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
  double sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
  double somaTotal = sp + rj + mg + es + outros;

  double fatSP = (sp / somaTotal) * 100;
  double fatRJ = (rj / somaTotal) * 100;
  double fatMG = (mg / somaTotal) * 100;
  double fatES = (es / somaTotal) * 100;
  double fatOutros = (outros / somaTotal) * 100;
  printf("\n\n");
  printf("O faturamento de todos os estados foi de R$%.2f\n\n", somaTotal);
  printf("=========================================================\n");
  printf("O faturamento de São Paulo foi de R$%.2f referente a %.0f%%\n", sp, fatSP);
  printf("O faturamento do Rio de Janeiro foi de R$%.2f referente a %.0f%%\n", rj, fatRJ);
  printf("O faturamento de Minas Gerais foi de R$%.2f referente a %.0f%%\n", mg, fatMG);
  printf("O faturamento do Espirito Santos foi de R$%.2f referente a %.0f%%\n", es, fatES);
  printf("O faturamento dos outros estados foram de R$%.2f referente a %.0f%%\n", outros, fatOutros);
  printf("=========================================================\n");
  printf("\n\n");
  
  system("pause");
}
