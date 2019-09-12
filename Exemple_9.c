#include <stdio.h>

int main(void) {
    int num, res, i;
    
    printf ("Quin número vols comprovar? ");
    scanf ("%d", &num);
    
    if (num < 1 || num > 9) {
        printf ("El número introduit no és correcte.");
        return 0;
    }
    
    for (i = 0 ; i < 10 ; i++) {
        res = num*i;
        printf ("%d * %d = %d \n", num, i, res);
    }
    
    return 0;
}
