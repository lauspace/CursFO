#include <stdio.h>
int main () {
  int i;
  int j;
  int res;
  printf("Introdueix el primer número: \n");
  scanf("%d", &i);
  printf("Introdueix el segon número: \n");
  scanf("%d", &j);
  res = i + j;
  printf ("Resultat = %d", res);
  return 0;
}
