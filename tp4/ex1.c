#include<stdio.h>

float pih(float a) {
    float pi = 72.7 * a - 58;
    return pi;
}
float pim(float a) {
    float pi = 62.1 * a - 44.7;
    return pi;
}
int main() {
    float h, pi;
    char s;
    char m='m';
    char f='f';
    printf("Introduza a altura e o sexo(M/F):\n");
    scanf("%f", &h);
    scanf(" %c", &s);
    if(s == m) {
        pi = pih(h);
        printf("O peso ideal é %f\n", pi);
    }
    if(s == f) {
        pi = pim(h);
        printf("O peso ideal é %f\n", pi);
    }
}