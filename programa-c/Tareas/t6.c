#include<stdio.h>

int main(){
	int n1,n2;
	printf("Digite dos numeros enteros: "); scanf("%i %i",&n1,&n2);
	
	if(n1==n2){
		printf("Los numeros %i y %i son iguales",n1,n2);
	}
	else{
		printf("Los numeros %i y %i no son iguales",n1,n2);
	}

}
