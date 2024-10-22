#include<stdio.h>
#include<math.h>

int lerPoli(int *poli) {
    int i, g;
    i = 0;
    printf("Introduza o grau do polinómio:\n");
    scanf("%i", &g);
    int p[g];
        while(i < g + 1) {
            scanf("%i", &p[i]);
            i++;
        }
    return i;
}

void imprimir_vetor(int x[], int i) {
    int vv, c;
    vv = 1;
    c = 0;
    printf("O vetor lido foi: { ");
        while(vv<=i) {
            printf("%i ", x[c] );
            vv++;
            c++;
    }
    printf("}\n");
}

void escrevePoli(int *poli, int grau) {
    int i = 0;
    
}


int main() {
    int a[100];
    int i;
    i = lerPoli(&a);
    imprimir_vetor(a, i);
}