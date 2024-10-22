#include<stdio.h>

int main() {
    int n1, n2, n3;
    printf("Introduza 3 números inteiros;\n");
    scanf("%i%i%i", &n1, &n2, &n3);
    if(n1<n2 && n1<n3 && n2<n3)  
        printf("%i %i %i\n", n1, n2, n3);
    if(n2<n1 && n2<n3 && n1<n3)  
        printf("%i %i %i\n", n2, n1, n3);
    if(n3<n1 && n3<n2 && n1<n2)
        printf("%i %i %i\n", n3, n1, n2);
    if(n3<n1 && n3<n2 && n2<n1)
        printf("%i %i %i\n", n3, n2, n1);
    if(n1<n2 && n1<n3 && n3<n2)
        printf("%i %i %i\n", n1, n3, n2);
    if(n2<n1 && n1<n3 && n3<n1)
        printf("%i %i %i\n", n2, n3, n1);
}