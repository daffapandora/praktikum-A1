#include <stdio.h>

int main(){
	
	int r;
	float vk, vb;
	
	printf("masukan nilai r :");
	scanf("%d", &r);
	
	vb = 4 / 3 * (3.14 * r * r * r);
	vk = 0.5 * vb;

	printf("Volume bola adalah %f meter.\n", vk); 
	
	return 0;
}
