#include<stdio.h>

int main() {
    int ano;
    float emt, ema, ca;
    while(ano<=2018)
        scanf("%i%f%f", &ano, &emt, &ema);
        ca = (ema/emt) * 100;
        printf("%i: %f%%\n", ano, ca);
}