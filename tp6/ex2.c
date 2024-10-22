#include<stdio.h>

void preencher_vetor(float v[], int n) {   
    int vv, c;
    c = 0;
    vv = 1;
        while(vv<=n) {
            printf("Introduza o elemento %i: ", vv);
            scanf("%f", &v[c]);
            vv++;
            c++;
        }
}

void somatorio_vetor(float v[], int n) {
    float sum;
    int vv, c;
    c = 0;
    vv = 1;
        while(vv<=n) {
           sum = sum + v[c];
           vv++;
           c++;
        }
    printf("e a soma dos seus elementos é %.01f\n", sum);

}

void imprimir_vetor(float v[], int n) {
    int vv, c;
    vv = 1;
    c = 0;
    printf("O vetor lido foi: { ");
        while(vv<=n) {
            printf("%.01f ", v[c] );
            vv++;
            c++;
    }
    printf("}\n");
}


int main () {
    int i, vv;
    float v[15];
    vv = 0;    
    printf("Quantos elementos pretende armazenar?\n");
    scanf("%i", &i);
        if(i > 15) {
            while(i > 15) {
                printf("Quantos elementos pretende armazenar?\n");
                scanf("%i", &i);
            }
        }
    preencher_vetor(v, i);
    imprimir_vetor(v, i);
    somatorio_vetor(v, i);

}