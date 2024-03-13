#include <stdio.h>

int main(){
	
	int m, v, r;
	float F;
	printf("Nilai m :");
	scanf("%d", &m);
	printf("Nilai v :");
	scanf("%d", &v);
	printf("Nilai r :");
	scanf("%d", &r);
	
	F =m * (v * v / r);
	
	printf("Jarak gaya adalah %f meter.\n", F); 
	
	return 0;
}
