#include<stdio.h>

int div(int a, int b, int *r, int *rr) {
    *r = 0;
    *rr = 0;
    int i, aa;
    aa = a;
    if(b != 0) {
        while(a >= 0) {
            a = a - b;
            *r = *r + 1;
        }
        *r = *r - 1;
        i = *r * b;
        *rr = aa - i;
        return 1;
    }
    else
        return 0;
}

int main() {
    int a, b, r, rr, i;
    printf("Introduza o dividendo: ");
    scanf("%i", &a);
    printf("Introduza o divisor: ");
    scanf("%i", &b);
    i = div(a, b, &r, &rr);
    printf("Código de erro: %i\n", i);
    printf("Quociente: %i\n", r);
    printf("Resto: %i\n", rr);
}