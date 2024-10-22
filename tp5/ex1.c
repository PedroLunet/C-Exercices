#include<stdio.h>

int main() {
    char x;
    int i, ii, iii, iiii, l, c;
    i = 1;
    ii = 1;
    iii = 1;
    iiii = 1;
    printf("Introduza um carater:\n");
    scanf("%c", &x);
    printf("Introduza o número de linhas:\n");
    scanf("%i", &l);
    printf("Introduza o número de colunas:\n");
    scanf("%i", &c);
        while(i <= c) {
            printf("%c", x);
                if(i == c)
                    printf(" \n");
        i++;
        }
        while(iii <= l-2) {
            printf("%c", x);
                while(ii <= c-2) {
                    printf("_");
                    ii++;
                }
            printf("%c\n", x);
            iii++;
            ii = 1;
        }
        while(iiii <= c) {
            printf("%c", x);
                if(iiii == c)
                    printf(" \n");
        iiii++;
        }
}