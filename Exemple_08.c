#include <stdio.h>

int main(void) {
    int hores, minuts, segons;
           
    printf("Introdueixi l'hora:");
    scanf("%d",&hores);
    printf("Introdueixi els minuts:");
    scanf("%d",&minuts);
    printf("Introdueixi els segons:");
    scanf("%d",&segons);
           
    if (hores>23 || minuts>59 || segons>59) {
       printf ("El format de l'hora no és correcte");
       return 0;
    }
    
    segons = segons+1;

    if (segons == 60) {
        segons = 00;
        minuts = minuts+1;
    }
    
    if (minuts == 60) {
        minuts = 00;
        hores = hores+1;
    }
    
    if (hores == 24) {
        hores = 00;
    }
    
    printf("L'hora, un segon després, és: %02d:%02d:%02d \n", hores, minuts, segons);
    return 0;
}
