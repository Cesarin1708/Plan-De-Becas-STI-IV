#include<stdio.h>
int suma(int x, int y){
	return(x+y);
}

int res(int x, int y){
	return(x-y);

}

int mul(int x, int y){
	return(x*y);
	
}

int div(int x, int y){
	return(x/y);

}

int main(){
	int a,b,c;
	printf("Digite un numero: ");
	scanf("%d",&a);
	printf("Digite otro numero: ");
	scanf("%d",&b);

	c=suma(a, b);
	printf("\nLa suma es %d",c);
	c=res(a, b);
	printf("\nL resta es %d",c);
	c=mul(a, b);
	printf("\nLa multiplicacion es %d",c);
	c=div(a, b);
	printf("\nLa division es %d",c);

}
