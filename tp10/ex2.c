#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct artigo{
    char nome[50];
    char marca[50];
    char modelo[50];
    float preco;
    int stock;
} artigo;

int main() {
    FILE *f;
    artigo a1[50];
    int i = 0;
    int ii = 0;
    f=fopen("e2.txt", "r");
        if(f == NULL) {
            printf("Error!\n");
            exit(1);
        }
        else {
            while(fscanf(f,"%s %s %s %f %i", a1[i].nome, a1[i].marca, a1[i].modelo, &a1[i].preco, &a1[i].stock)) {
                    printf("%s\t %s\t %s\t %.01f\t %i\n", a1[i].nome, a1[i].marca, a1[i].modelo, a1[i].preco, a1[i].stock);
                    if(feof(f))
                        break;
                    i++;
            }
        }
}