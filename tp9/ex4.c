#include<stdio.h>
#include<math.h>

void cartesianas_polares(float x, float y, float *r, float *theta) {
    *r = sqrt(pow(x, 2) + pow(y, 2));
    *theta = atan2(y, x);
    }
void polares_cartesianas(float r, float theta, float *x, float *y) {
    *x = r * cos(theta);
    *y = r * sin(theta);
}

int main() {
    int i;
    float a, b, c, d;
    printf("Pretende fazer conversão:\nPolares - Cartesianas (1)\nCartesianas - Polares (2)\n");
    scanf("%i", &i);
        if(i == 2) {
            printf("Introduza o valor de x:\n");
            scanf("%f", &a);
            printf("Introduza o valor de y:\n");
            scanf("%f", &b);
            cartesianas_polares(a, b, &c, &d);
            printf("As coordenadas polares são: (%.02f,%.02f)\n", c, d);
        }
        if(i == 1) {
            printf("Introduza o valor de r:\n");
            scanf("%f", &a);
            printf("Introduza o valor do ângulo:\n");
            scanf("%f", &b);
            polares_cartesianas(a, b, &c, &d);
            printf("As coordenadas cartesianas são: (%.02f,%.02f)\n", c, d);
        }
}