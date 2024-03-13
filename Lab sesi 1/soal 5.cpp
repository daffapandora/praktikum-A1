#include <stdio.h>

int main(){
	
	int s1, s2, d1, d2;
	float luas, kell;
	
	printf("masukan nilai s1 :");
	scanf("%d", &s1);
	printf("masukan nilai s2 :");
	scanf("%d", &s2);
	printf("masukan nilai d1 :");
	scanf("%d", &d1);
	printf("masukan nilai d2 :");
	scanf("%d", &d2);
	
	luas = 0.5 * d1 * d2;
	kell = 2 * (s1 + s2);

	printf("Luas %f .\n", luas); 
	printf("keliling %f .\n", kell); 
	
	return 0;
}
