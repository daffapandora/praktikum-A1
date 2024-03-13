#include <stdio.h>

int main() {
  int v0, t, a, S;

  printf("Masukkan nilai v0 : ");
  scanf("%lf", &v0);
  printf("Masukkan nilai t : ");
  scanf("%lf", &t);
  printf("Masukkan nilai a : ");
  scanf("%lf", &a);

  S = v0 * t + 0.5 * (a * t * t);

  printf("Jarak yang ditempuh benda adalah %lf meter.\n", S);

  return 0;
}
	
