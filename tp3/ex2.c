#include<stdio.h>

int main() {
    float x, y;
    printf("Indique o ponto (x,y)\n");
    printf("Valor de x:");
    scanf("%f", &x);
    printf("Valor de y:");
    scanf("%f", &y);
    if(x>0 && y>0)
        printf("O ponto pertence ao 1º quadrante.\n");
    if(x<0 && y>0)
        printf("O ponto pertence ao 2º quadrante.\n");
    if(x<0 && y<0)
        printf("O ponto pertence ao 3º quadrante.\n");
    if(x>0 && y<0)
        printf("O ponto pertence ao 4º quadrante.\n");
}