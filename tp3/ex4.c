#include<stdio.h>

int main() {
    int nn, r, a;
    printf("Introduza um número inteiro:\n");
    scanf("%i", &nn);
    a=2;
    while(nn>1)  {
        r = nn % a;
        if(r == 0)  {

            nn = nn / a;
            printf("%d ", a);
        }
        else 
            a = a + 1;   
     }
}