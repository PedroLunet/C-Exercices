#include <stdio.h>

#define TAM_MAX 10

/********************************************/
/*       ALTERAR APENAS ESTA FUNCAO         */

int produto_vetores(int entrada1[], int n1, int entrada2[], int n2, int saida[])
{
    int i, x;
    i = 0;
    x = 0;
    if(0 < n1 && n1 <= TAM_MAX && 0 < n2 && n2 <= TAM_MAX) {
        if(n1 <= n2) {
            while(i < n1) {
                saida[x] = entrada1[i] * entrada2[i];
                i++;
                x++;
            }
        if(n2 < n1) {
            while(i < n2) {
                saida[x] = entrada1[i] * entrada2[i];
                i++;
                x++;
            }
        }
        }
        return x;
    }
    else
        return -1;
}

/********************************************/

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}

int main()
{
    int v1[TAM_MAX] = { 4, 7, 6 };
    int v2[TAM_MAX] = { 2, 8, 2, 1, 3 };
    int res[TAM_MAX], tam;
    tam = produto_vetores(v1, 3, v2, 5, res);
    printf("vetor de entrada 1: ");
    imprime_vetor(v1, tam);
    printf("vetor de entrada 2: ");
    imprime_vetor(v2, tam);

   

    printf("vetor de saida: ");
    imprime_vetor(res, tam);
}

