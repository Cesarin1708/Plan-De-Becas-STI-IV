#include<stdio.h>

int main(){

	int a,b,c,d;

	printf("Digite un numeros: ");
	scanf("%i",&a); 
	printf("Digite otro numero: ");
	scanf("%i",&b); 
	printf("Digite otro numero: "); 
	scanf("%i",&c); 
	printf("Digite otro numero: ");  
	scanf("%i",&d);

	if(a>b && a>c && a>d){
		printf("%i es el numero mayor.",a);
	}
	else if (b>c && b>d){
		printf("%i es el numero mayor.",b);
	}
	else if (c>d){
		printf("%i es el numero mayor.",c);
	}
	else{
		printf("%i es el nuemro mayor.",d);
	}
	return 0;

}
