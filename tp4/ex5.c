#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int cl( float a, float a1, float b, float b1, float ra1, float ra2) {
    float sr, d, col;
    d = sqrt(fabs(pow(a-a1, 2) - pow(b-b1, 2)));
    sr = ra1+ra2;
        if(d>sr)
            col = 0;
        else
            col = 1;
    return col;
}

int main() {
    float x, x1, y, y1, r, rr;
    int ff;
    printf("Introduza as coordenadas do centro da primeira circunferência (x,y):\n");
    scanf("%f%f", &x, &y);
    printf("Introduza o raio da primeira circunferência:\n");
    scanf("%f", &r);
    printf("Introduza as coordenadasdo centro da segunda circunferência(x,y):\n");
    scanf("%f%f", &x1, &y1);
    printf("Introduza o raio da segunda circunferência:\n");
    scanf("%f", &rr);
    ff = cl(x, x1, y, y1, r, rr);
        if(ff==0){
            printf("As esferas nao estao a colidir.\n");
        }
        if(ff==1){
            printf("As esferas estao a colidir.\n");
        }
}