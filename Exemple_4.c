#include <stdio.h>
int main () {
  int edat;
  printf ("Quina edat tens? \n");
  scanf ("%d", &edat);
  if (edat < 18) {
      printf ("Menor");
  } else {
      printf ("Major");
  }
  return 0;
}
