#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int l;
    printf("Quantos lançamentos?\n");
    scanf("%i", &l);
    int ff;
    int nn;
    int i;
    i=1;
    nn=0;
    time_t t;
    srand((unsigned) time(&t));
    while(i<=l) {
        ff = rand() % 7;
        i++;
        if(ff==6) {
            nn=nn+1;
        }

    }
    printf("A face seis saiu %i vezes.", nn);
}