#include<stdio.h>

int main() {
    int nn, soma, dd;
    printf("Introduza um número inteiro de dois ou mais algarismos:\n");
    scanf("%i", &nn);
    soma=0;
    while(nn>0)  {
        dd= nn % 10;
        soma = soma + dd;
        nn = nn / 10;
    }
    printf("A soma dos digitos do algarismo inserido é %i\n", soma);
    
}