#include<stdio.h>

int main(){
	int n1,n2;
	printf("Digite dos numeros: "); scanf("%i %i",&n1,&n2);
	if(n1==n2){
		printf("Son iguales");
	}
	else if(n1>n2){
		printf("%i es mayor que %i",n1,n2);
	}
	else{
		printf("%i es mayor que %i",n2,n1);
	}

}
