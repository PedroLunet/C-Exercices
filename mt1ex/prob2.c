#include<stdio.h>

int main() {
    int i, ano, big, sml, div;
    float et, ea, cta, aa, bb, soma, med;
    printf("Contribuição da agricultura para as emissões de N2O :\n");
    i = 2000;
    aa=0;
    bb=1;
    soma=0;
    div=0;
    while(i<=2018) {
        scanf("%i%f%f", &ano, &et, &ea);
        cta = (ea/et)*100;
        printf("%i: %.01f%%\n", ano, cta);
        if(cta>aa) {
                big=ano;
                aa=cta;
            }
            if(et<bb){
                sml=ano;
                bb=et;
            }
            
        soma=soma+et;
        div=div+1;
        i++;
    }
    med=soma/div;
    printf("Ano em que a agricultura mais contribuiu para as emissões de N2O per capita : %i\n", big);
    printf("Ano em que as emissões de N2O per capita foram mais reduzidas : %i\n", sml);
    printf("Média das emissões de N2O per capita : %.03f\n", med);
}