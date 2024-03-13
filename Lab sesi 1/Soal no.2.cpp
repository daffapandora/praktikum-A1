#include <stdio.h>

int main(){
	int v0, t, g;
	float y;
	
	printf("Nilai v0 :");
	scanf("%d", &v0);
	printf("Nilai t :");
	scanf("%d", &t);

	y = v0 * t - 0.5* (9.8 * t * t); 
	
	printf("Jarak yang ditempuh benda adalah %f meter.\n", y);
	
	return 0;
}
