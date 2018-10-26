#include<stdio.h>

int main(){

int contador ;

int numero[5];

	printf("Ingrese 6 numeros: ");
	scanf(" %c",&numero[contador]);
		
	for(contador=0;contador<=5;contador++){
		printf("Ingrese un numero # %d: ",contador);
		numero[contador]=getchar();


		fflush(stdin);
	}
	
	printf("La palabra que fue introducida fue:\n\n", contador);

	for(contador=0;contador<=5;contador++){

		printf(" %c",numero[contador]);
	
	}


}
