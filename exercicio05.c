/* 5) Escreva um programa que inverta os caracteres de um string. 

IMPORTANTE: 
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser 
previamente definida no código; 
b) Evite usar funções prontas, como, por exemplo, reverse; */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

    char nome[30], aux;

    printf("Digite a palavra: ");
    gets(nome);

    int i = 0, j, tam = 0;

    while (nome[i] != '\0'){
        tam++;
        i++;
    }
    for (i = 0, j = (tam-1); i < (tam/2), j > (tam/2); i++, j--){
        aux = nome[i];
        nome[i] = nome[j];
        nome[j] = aux;
    }

    printf("\nInvertindo a palavra digitada: ");
    puts(nome);
    
    system("pause");
}
