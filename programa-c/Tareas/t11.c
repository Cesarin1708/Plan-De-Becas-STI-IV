#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,x1,x2;

	printf("Digite el valor de a,b y c: ");
	scanf("%f %f %f",&a,&b,&c);
	
	x1=(-1*b+(sqrt((b*b)-(4*a*c))))/(2*a);
	x2=(-1*b-(sqrt((b*b)-(4*a*c))))/(2*a);
	
	printf("El valor de x1 es %f y el valor de x2 es %f",x1,x2);

}
