#include<stdio.h>

int main(){
	int s,m,h,d,a,r,o;

	printf("\nAqui puedes convertir el tiempo que digites en segundos-minutos-horas-dias-años\n\n");
	printf("Digite los segundos-minutos-horas-dias--años que quiera convertir, en caso de no tener el dato digite 0: ");
	scanf("%i %i %i %i %i",&s,&m,&h,&d,&a);
	
        printf("\n1.Segundos");
        printf("\n2.Minutos");
        printf("\n3.Horas");
        printf("\n4.Dias");
        printf("\n5.Años\n");

	printf("\nElija la unidad en la que quiere que se convierta el tiempo digitado"); 
	scanf("%i",&o);

	s = s * 1;
	m = m * 60;
	h = h * 3600; 
	d = d * 86400;
	a = a * 31536000;

	switch(o){
		case 1:
			r = s + m + h + d + a;
			printf("La cantidad en segundos es %i",r); break;

		case 2: 
			r = (s + m + h + d + a)/60;
			printf("La cantidad en minutos es %i",r); break;

		case 3: 	
			r = (s + m + h + d + a)/3600;
			printf("La cantidad en horas %i",r); break;

		case 4: 
			r = (s + m + h + d + a)/86400;                                                           printf("La cantidad en dias %i",r); break;

		case 5: 
			r = (s + m + h + d + a)/31536000;                                   			printf("La cantidad en años %i",r); break; 
		
		default: 
			printf("Digite un numero entre el 1-5"); break;
	}	

}
