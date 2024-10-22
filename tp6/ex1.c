#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    time_t t;
    srand((unsigned) time(&t));
    int i = 1, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0;
    int r[30];
        while(i <= 30) {
            r[x] = rand() % 6 + 1;
                if(r[x]==1)
                    a = a + 1;
                if(r[x]==2)
                    b = b + 1;
                if(r[x]==3)
                    c = c + 1;
                if(r[x]==4)
                    d = d + 1;
                if(r[x]==5)
                    e = e + 1;
                if(r[x]==6)
                    f = f + 1;
            i++;
            x++;
        }
    printf("1- ");
        while(a>0) {
            printf("*");
                if(a==1) 
                    printf("\n");
            a--;
        }
    printf("2- ");
        while(b>0) {
            printf("*");
                if(b==1) 
                    printf("\n");
            b--;
        }
    printf("3- ");
        while(c>0) {
            printf("*");
                if(c==1) 
                    printf("\n");
            c--;
        }
    printf("4- ");
        while(d>0) {
            printf("*");
                if(d==1) 
                    printf("\n");
            d--;
        }
    printf("5- ");
        while(e>0) {
            printf("*");
                if(e==1) 
                    printf("\n");
            e--;
        }
    printf("6- ");
        while(f>0) {
            printf("*");
                if(f==1) 
                    printf("\n");
            f--;
        }
}