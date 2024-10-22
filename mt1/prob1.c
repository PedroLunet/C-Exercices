#include<stdio.h>

int main() {
    int a, t, v, df, i, m, mm, f1, f2;
    f1 = 1000000000;
    f2 = 0;
    i = 2000;
        	while(i<=2019){
                scanf("%i%i%i", &a, &t, &v);
                df = t - v;
                printf("Diferença em %i: %i\n", a, df);
                    if(t < f1) {
                        m = a;
                        f1 = t;
                    }
                    if(df > f2) {
                        mm = a;
                        f2 = df;
                    }
                i++;
            }
    printf("Ano em que foram produzidos menos exemplares : %i\n", m);
    printf("Ano em a diferença entre produzidos e vendidos foi maior : %i\n", mm);
}