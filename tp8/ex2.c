#include <stdio.h>


int main() {
    int var1 = 5;
    int *ptr1 = &var1;
    char var2 = 'a';
    char *ptr2;
    char a = 'b';
    ptr2 = &a;
    printf("var1 tem o endereco %p e o valor %d\n", &ptr1, *ptr1);
    printf("var2 tem o endereco %p e o valor %c\n", &ptr2, *ptr2);
}