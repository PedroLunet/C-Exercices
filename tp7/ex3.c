#include<stdio.h>


int compacta(char orig[], int N, char dst[]) {
    int i = 0, x = 0;
        while(i < N) {
                if(orig[i] != orig[i+1]) {
                    dst[x] = orig[i];
                    dst[x+1] = orig[i+1];
                    x++;
                    i++;
                }
                if(orig[i] == orig[i+1]) {
                    i++;
                }
        }
    return x;
}

int main() {
    int n;
    scanf("%i ", &n);
    int N = n+1;
    char v[N];
    gets(v);
    int a;
    char s[a];
    a = compacta(v, N, s);
    puts(s);
    
}