#include<stdio.h>

void div(int a, int b, int *r, int *rr) {
    *r = 0;
    *rr = 0;
    int i, aa;
    aa = a;
        while(a >= 0) {
            a = a - b;
            *r = *r + 1;
        }
    *r = *r - 1;
    i = *r * b;
    *rr = aa - i;
}

int soma(int n) {
    int soma, dd;
    soma=0;
    while(n>0)  {
        dd= n % 10;
        soma = soma + dd;
        n =     n / 10;
    }
    return soma;
}

int par(int n) {
        if(n % 2 == 0) {
            return 1;
        }
        else
            return 0;
}

int main() {
    int i;
    int a, b, c, d;
    printf("Qual operação pretende executar:\n1-Divisão\n2-Soma dos algarismos\n3-verificação Par/Ímpar\n");
    scanf("%i", &i);
     if(i == 1) {
        printf("Introduza o dividendo e o divisor:\n");
        scanf("%i %i", &a, &b);
        div(a, b, &c, &d);
        printf("Quociente: %i\n", c);
        printf("Resto: %i\n", d);
     }
     if(i == 2) {
        printf("Introduza um número inteiro:\n");
        scanf("%i", &a);
        b = soma(a);
        printf("A soma dos agarismos de %i é %i\n", a, b);
     }
     if(i == 3) {
        printf("Introduza um número inteiro:\n");
        scanf("%i", &a);
        b = par(a);
            if(b == 1) {
                printf("O número %i é par.\n", a);
            }
            else {
                printf("O número %i é ímpar.\n", a);
            }
    }
}