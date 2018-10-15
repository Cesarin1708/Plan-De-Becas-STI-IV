#include<stdio.h> 

int main(){

	char l;
	printf("Digite un caracter: "); scanf(" %c",&l);

	if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U'){
		printf("El caracter %c es una vocal",l);
	}
	else{
		printf("El caracter %c es una consonante",l);
	}
	

}
