#include <stdio.h>

int main (){
	int i;
	
	printf ("masukan bilangan integer sembarang : ");
	scanf("%d", &i);
	if (i > 0) {
        printf("bilangan bulat positif\n"); 
    } 
	else if (i == 0) {
       printf("bilangan nol\n");
    } 
	else {
         printf("bilangan bulat negatif\n");
    }

    return 0;
}
