#include<stdio.h>
#include<math.h>

float fx(float a, float x)  {
    float fx= a * pow(x,2);
    return fx;
}

int main() {
    float a, i;
    int li, ls;
    printf("Qual o valor de a:\n");
    scanf("%f", &a);
    printf("Quais os limites inferior e superior do intervalo, respetivamente:\n");
    scanf("%i%i", &li, &ls);
    printf("Qual o incremento:\n");
    scanf("%f", &i);
    float ii;
    ii = li;
    while(ii<=ls) {
        printf("f(%0.1f)=%0.1f\n", ii, fx(a, ii));
        ii=ii+i;
    }
}