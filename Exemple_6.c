#include <stdio.h>
int main () {
  int xifra_usuari = 0;
  int numero_secret = 15;
  while (xifra_usuari != numero_secret) {
    printf ("Endevina el número secret entre l'1 i el 20: \n");
    scanf ("%d", &xifra_usuari);
  }
  printf ("Has endevinat el número!");
  return 0;
}
