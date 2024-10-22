#include<stdio.h>

float custo ( char zona , int servico ) {
    float c;
        if(zona == 'A' && servico == 0)
            c = 5.25;
        if(zona == 'A' && servico == 1)
            c = 3.50;
        if(zona == 'B' && servico == 0)
            c = 4.50;
        if(zona == 'B' && servico == 1)
            c = 4.25;
        if(zona == 'C' && servico == 0)
            c = 3.25;
        if(zona == 'C' && servico == 1)
            c = 5.00;
        if(zona == 'D' && servico == 0)
            c = 3.50;
        if(zona == 'D' && servico == 1)
            c = 4.50;
        if(zona == 'E' && servico == 0)
            c = 4.75;
        if(zona == 'E' && servico == 1)
            c = 4.00;
    return c;
}

int main () {
     int n, i, min, ss;
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
                    ss = 1;
                    bl = bl + custo (zona, ss);
                    so = so + 21;
                    
                }
                if(zona == 'B'){
                    printf("Encomenda %i - blovo\n", n); 
                    ss = 1;
                    bl = bl + custo (zona, ss); 
                    so = so + 24;
                    
                }
                if(zona == 'C'){
                    printf("Encomenda %i - uverits\n", n); 
                    ss = 0;
                    uv = uv + custo (zona, ss); 
                    so = so + 15; 
                    
                }
                if(zona == 'D'){
                    printf("Encomenda %i - uverits\n", n); 
                    ss = 0;
                    uv = uv + custo (zona, ss); 
                    so = so + 23;
                    
                }
                if(zona == 'E'){
                    printf("Encomenda %i - blovo\n", n); 
                    ss = 1;
                    bl = bl + custo (zona, ss);
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
