#include<stdio.h>

int hoursMin(int totalMins, int *hours, int *minutes) {
    *hours = totalMins / 60;
    *minutes = totalMins-(*hours * 60);
        if(*hours >= 24)
            return 1;
        else    
            return 0;
}

int main() {
    int ttlm, hrs, min, i;
    printf("Insira o total de minutos: \n");
    scanf("%i", &ttlm);
    i = hoursMin(ttlm, &hrs, &min);
        if(i == 0) {
            printf("%i minutos correspondem a %02ih:%02im e não é superiror a 1 dia.\n", ttlm, hrs, min);
        }
        else {
            printf("%i minutos correspondem a %02ih:%02im e é superiror a 1 dia.\n", ttlm, hrs, min);
        }
}