#include<stdio.h>

int main() {
    int n, i, min;
    float bl, uv, so, mt, ff, seg;
    char zona;
    i = 1;
    bl = 0;
    uv = 0;
    so = 0;
        while(i<=100) {
            scanf("%i %c", &n, &zona);
                if(zona == 'A'){
                    printf("Encomenda %i - blovo\n", n);
                    bl = bl + 3.50;
                    so = so + 21;
                }
                if(zona == 'B'){
                    printf("Encomenda %i - blovo\n", n); 
                    bl = bl + 4.25;  
                    so = so + 24;
                }
                if(zona == 'C'){
                    printf("Encomenda %i - uverits\n", n); 
                    uv = uv + 3.25; 
                    so = so + 15; 
                }
                if(zona == 'D'){
                    printf("Encomenda %i - uverits\n", n); 
                    uv = uv + 3.50; 
                    so = so + 23;
                }
                if(zona == 'E'){
                    printf("Encomenda %i - blovo\n", n); 
                    bl = bl +4.00; 
                    so = so + 24; 
                }
            i++;
        }
    mt = so / 100;
    min = mt;
    ff = mt - min;
    seg = ff * 60;
    printf("Custo total na uverits: %.02f euros\n", uv);
    printf("Custo total na blovo: %.02f euros\n", bl);
    printf("Tempo médio das entregas : %i minutos e %.00f segundos\n", min, seg);
}