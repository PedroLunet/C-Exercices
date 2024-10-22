#include<stdio.h>

void preencher_vetor(float x[]) {   
    int vv, c;
    c = 0;
    x = 0;
        while(x<=0) {
            printf("Introduza o elemento: ");
            scanf("%f", &x[c]);
            c++;
        }
}

int main() {
    float x[20];
    preencher_vetor(x);
    
}