#include<stdio.h>

int procuraTodos(int v[], int N, int x, int posicoes[]) {
    int i, a;
    a = 0;
    i = 0;
        while(i < N) {
            if(v[i] == x) {
                posicoes[a] = i;
                a++;
            }
            i++;
        }
        if(a == 0)
            return 0;
        else
            return a;
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}

int main() {
    int v1[15] = { 4, 7, 6, 4, 5, 6, 4, 6, 4, 5, 3, 4, 5, 6, 4};
    int res[15], tam;
    tam = procuraTodos(v1, 15, 4, res);
    printf("vetor de entrada: ");
    imprime_vetor(v1, 15);
    printf("vetor de saida: ");
    imprime_vetor(res, tam);
}
