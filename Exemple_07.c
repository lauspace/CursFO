#include <stdio.h>

int main(void) {
    int num1,num2,num3;
           
    printf("Introdueix el número 1:");
    scanf("%d",&num1);
    printf("Introdueix el número 2:");
    scanf("%d",&num2);
    printf("Introdueix el número 3:");
    scanf("%d",&num3);

    if (num1<num2) {
        if (num2<num3) {
           printf("Ordre ascendent");
        }
        else {
           printf("No estan en ordre ascendent");
        }
    }
    else {
        printf("No estan en ordre ascendent");
    }
    
    return 0;
}
