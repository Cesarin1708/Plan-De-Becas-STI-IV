#include<stdio.h>

int main(){
	int a;
	float b; 
	char d; 	
	
	printf("Digite un numero entero: "); scanf("%i",&a);	
	printf("Digite un numero flotante: "); scanf("%f",&b);
	printf("Digite un caracter: "); scanf(" %c",&d);

	printf("El numero entero es %i, el numero flotante es %.2f, y el caracter es %c",a,b,d);

}
