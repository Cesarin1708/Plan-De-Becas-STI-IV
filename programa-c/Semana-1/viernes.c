#include<stdio.h>

int main(){

	char l;
	printf("Ingrese una letra: "); scanf("%c",&l);
	switch(l){

		case 'a': 
			printf("Su letra %c es una vocal \n",l); break;
		case 'e':
			printf("Su letra %c es una vocal \n",l); break;
		case 'i': 
			printf("Su letra %c es una vocal \n",l); break;
		case 'o':
			printf("Su letra %c es una vocal \n",l); break;
		case 'u': 	
			printf("Su letra %c es una vocal \n",l); break;
		default:
			printf("Su letra %c es una consonante \n",l); break;
		
	}

}
