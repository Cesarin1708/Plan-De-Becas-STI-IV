#include<stdio.h>

int main(){ 

	int calculadora;
	float n1,n2,r;

	printf("Ingrese dos numeros: ");
	scanf("%f %f",&n1,&n2);
	printf("1=Suma\n");
	printf("2=Resta\n");
	printf("3=Multiplicacion\n");
	printf("4=Division\n");
	scanf("%i",&calculadora);
	
	switch(calculadora){
		case 1:
			r=n1+n2; printf("El resultado es: %.2f",r); break;
		case 2: 	
			r=n1-n2; printf("El resultado es: %.2f",r); break;
		case 3: 
			r=n1*n2; printf("El resultado es: %.2f",r); break;
		case 4:
			r=n1/n2; printf("El resultado es: %.2f",r); break;
		default:
			printf("Elije una de las opciones que se muestran en pantalla"); break; 
	}

}
