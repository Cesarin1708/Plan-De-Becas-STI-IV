#include<stdio.h>  

int  main () { 

	int numero;
	int numero2;
	int resultado;

	printf("Ingresar el valor1: ");
	scanf("%d",&numero);   
	printf("Ingresa el valor2: ");
	scanf("%d",&numero2);
	printf("El valor de su numero es: % d \n " , numero);
	printf ( " El valor de su numero2 es: % d \n " , numero2);
	resultado = numero + numero2;
	printf("La suma de los numeros es: % d \n " , resultado);
	resultado = numero - numero2;
	printf("La resta de los numeros es: % d \n " , resultado);
	resultado = numero * numero2;
	printf("La multiplicación de los números es: % d \n" , resultado);
	if (numero > numero2) {
		printf("\n\nEl primer numero es mayor que el segundo\n ");
     	}
}
