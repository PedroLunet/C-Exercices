#include<stdio.h>
#include<string.h>

void inverte(char *strOriginal, char *strInvertida) {
    int len;
    int i = 0, ii;
    len = strlen(strOriginal);
    ii = len - 1;
        while(i < len) {
            strInvertida[ii] = strOriginal[i];
            i++;
            ii--;
        }
    
    strOriginal[len] = '\0';


}

int main() {
    char frase[99];
    char saida[99];
    printf("Escreva uma frase com um máximo de 99 caracteres:\n");
    gets(frase);
    inverte(frase, saida);
    puts(saida);
}