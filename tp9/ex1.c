#include<stdio.h>

int *vmaior(int *valor1, int *valor2) {
    if(*valor1 < *valor2) {
        return valor2;
    }
    else
        return valor1;
    }

int main() {
    int a, b;
    int *i;
    printf("Intruduza dois valores inteiros:\n");
    scanf("%i %i", &a, &b);
    i = vmaior(&a, &b);
        if(i == &a) {
            printf("Endereço do maior: %p\n", &a);
            printf("Valor: %i\n", a);
        }
        if(i == &b) {
            printf("Endereço do maior: %p\n", &b);
            printf("Valor: %i\n", b);
        }
}