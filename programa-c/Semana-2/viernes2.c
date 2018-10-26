#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

//generar aleatorio

//rand() funcion para crear aleatorios

int a[4],i;
strand(time(NULL)); 

for(i=0;i<=4;i++){
	a[i]=(rand()%6+1);
}

for(i=0;i<=4;i++){

	printf ("El numero es aleatorio es %d: %d\n",i+1,a[i]);
}

}
