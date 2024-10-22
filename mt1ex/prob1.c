#include<stdio.h>

int main() {
    printf("Emissões de CO2 per capita:\n");
    int ppt, pcn, i, flag, ano;
    float ept, ecn, fpt, fcn;
    i = 2000;
    printf("ANO\tPT\tCN\n");
    flag = 0;
    while(i<=2020) {
        scanf("%i", &ppt);
        scanf("%f", &ept);
        scanf("%i", &pcn);
        scanf("%f", &ecn);
        fpt = ept*1000000/ppt;
        fcn = ecn*1000000/pcn;
        printf("%i\t%.02f\t%.02f\n", i, fpt, fcn);
        if(fcn>fpt && flag == 0) {
            ano = i;
            flag = 1;   
        }
        i++;
    }
    printf("Ano em que a China ultrapassou Portugal : %i\n", ano);
}