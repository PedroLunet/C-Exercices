#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float dist(float a, float a1, float b, float b1, float d) {
    d = sqrt(fabs(pow(a-a1, 2) - pow(b-b1, 2)));
    return d;
}

int main() {
    float x, x1, y, y1;
    printf("Introduza as coordenadas do primeiro ponto (x,y):\n");
    scanf("%f%f", &x, &y);
    printf("Introduza as coordenadas do segundo ponto (x,y):\n");
    scanf("%f%f", &x1, &y1);
    float f;
    f = dist(f, x, x1, y, y1);
    printf("%.02f\n", f);
}