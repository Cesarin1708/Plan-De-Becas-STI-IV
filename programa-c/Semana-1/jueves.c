#include<stdio.h>

int main(){

	char l;
	printf("Digite una letra: "); scanf("%c",&l);
	
	if(l=='a' || l=='A'){
		printf("Su letra %c es una vocal",l);
	}
	else if(l=='e' || l=='E'){
		printf("Su letra %c es una vocal",l);
	}
	else if(l=='i' || l=='I'){
		printf("Su letra %c es una vocal",l);
	}
	else if(l=='o' || l=='O'){
		printf("Su letra %c es una vocal",l);
	}
	else if(l=='u' || l=='U'){
		printf("Su letra %c es una vocal",l);
	}
	else{
		printf("Su letra %c es una consonante",l);
	}
}
	
