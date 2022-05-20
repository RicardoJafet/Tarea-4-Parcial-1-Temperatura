/*Autor: Ricardo Jafet Granados Chable, Realizado: 03/03/2022
    programa numero 26 en C: Medidor de temperatura.
	*/
#include<stdio.h>

int main() {
	float F, C=0; 
	printf("--------------------------------");
	printf("\nMedidor de temperaturas");
	printf("\n--------------------------------");
	printf("\nEl programa se detendra al introducir 999");
	
	while(C!=999) {
		printf("\nIntroduce la temperatura en grados centigrados: ");
	    scanf("%f", &C);
	    F =(9/5.0*C)+32;
	    printf("\nLa temperatura en Fahrenheit es: %f", F);
	    printf("\n----------------------------------------");
	}
	return 0;
}
