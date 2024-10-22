#include<stdio.h>


void preencher_vetor(float x[]) {   
    int vv, c;
    c = 0;
    vv = 1;
        while(vv<=10) {
            printf("Introduza o elemento %i: ", vv);
            scanf("%f", &x[c]);
            vv++;
            c++;
        }
}

void avg(float x[]) {
    float sum, avg;
    int vv, c;
    c = 0;
    vv = 1;
        while(vv<=10) {
           sum = sum + x[c];
           vv++;
           c++;
        }
    avg = sum / 10;
    printf("Média: %.02f\n", avg);
}

void max(float x[]) {
    int i;
    float c, ff;
    c = 0;
    i = 0;
        while(i <= 10) {
            if(x[i] > c) {
                ff = x[i];
                c = x[i];
            }
            i++;
        }
    printf("Máximo: %.01f\n", ff);
}

void min(float x[]) {
    int i;
    float c, ff;
    c = 10000;
    i = 0;
        while(i <= 10) {
            if(x[i] < c) {
                ff = x[i];
                c = x[i];
            }
            i++;
        }
    printf("Minimo: %.01f\n", ff);
}

void imprimir_vetor(float x[]) {
    int vv, c;
    vv = 1;
    c = 0;
    printf("O vetor lido foi: { ");
        while(vv<=10) {
            printf("%.01f ", x[c] );
            vv++;
            c++;
    }
    printf("}\n");
}


int main() {
    float x[10]; 
    preencher_vetor(x);  
    avg (x);
    max (x);
    min (x);
    imprimir_vetor (x);
}