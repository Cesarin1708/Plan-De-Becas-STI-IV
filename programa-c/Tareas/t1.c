#include<stdio.h>

int main(){
	
	int n1,n2,s,r,m,d,c;
	printf("Digite dos numeros: "); scanf("%i %i",&n1,&n2);
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	d=n1/n2; 
	c=n1-((n1/n2)*n2);
	printf("La suma es %i, la resta es %i, la multiplicacion es %i, la division es %i, y el modulo es %i",s,r,m,d,c);


}
