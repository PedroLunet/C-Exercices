#include<stdio.h>

void ordena(int *valorA, int *valorB, int *valorC) {
    int aa, bb, cc;
        aa = *valorA;
        bb = *valorB;
        cc = *valorC;
            if(aa <= bb && bb <= cc) {
                *valorA = aa;
                *valorB = bb;
                *valorC = cc;
            }
            else {
                if(aa <= cc && cc <= bb) {
                    *valorB = cc;
                    *valorC = bb;
                }
            else {
                if(bb <= aa && aa <= cc) {
                    *valorA = bb;
                    *valorB = aa;
                }
                else {
                    if(bb <= cc && cc <= aa) {
                    *valorA = bb;
                    *valorB = cc;
                    *valorC = aa;
                }
                else {
                    if(cc <= aa && aa <= bb) {
                    *valorA = cc;
                    *valorB = aa;
                    *valorC = bb;
                }
                else{
                    if(cc <= bb && bb <= aa) {
                    *valorA = cc;
                    *valorC = aa;
                }
                }
                }
                }
                }
            }
}


int main() {
    int a, b, c;
    printf("Insira os valores a ordenar:\n");
    scanf("%i %i %i", &a, &b, &c);
    ordena(&a, &b, &c);
    printf("Valores a, b, c ordenados por ordem crescente: %i, %i, %i\n", a, b, c);
}