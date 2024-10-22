#include<stdio.h>
#include<math.h>

float fat(float n) {
    float nn;
    nn = 0;
        while(n > 0) {
            nn *= n--;
        }
    return nn;
}
float seno(float x, float tolerancia) {
    float tt;
    int n;
    n = 1; 
        while(tolerancia < sin(x)- tt) {
            tt = pow(-1, n + 1) * ((pow(x, 2*n - 1))/fat((2*n - 1)));
            n++;
        }
    return tt;
}  

int main() {
    float x, tolerancia, sen;
    printf("Qual o valor de x?\n");
    scanf("%f", &x);
    printf("Qual o valor da tolerância?\n");
    scanf("%f", &tolerancia);
    sen = seno(x, tolerancia);
    printf("O seno de %.02f é %f\n", x, sen);
}
