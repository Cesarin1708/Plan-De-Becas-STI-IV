#include<stdio.h> 

int main (){
	int sig; 

	printf ("Elija un signo zodiacal digitando el nú correspondiente \n 1.aries \n 2.tauro \n 3.geminis \n 4.cancer \n 5.leo \n 6.virgo \n 7.libra \n 8.escorpion \n 9.sagutario \n 10.capricornio \n 11.acuraio \n 12.pisis \n : "); scanf("%i",&sig);

	switch(sig){
		case 1: 
			if(sig == 1 || sig == 5 || sig == 9){
			printf("\nEl signo zodiacal que elijo pertenece a la categorífuego");

		} break;
		case 2: 
			if(sig == 2 || sig == 6 || sig == 10){
			printf("\nEl signo zodiacal que elijo pertenece a la categorítierra"); 

		} break;
		case 3: 
			if(sig == 4 || sig == 8 || sig == 12){
			printf("\nEl signo zodiacal que elijo pertenece a la categoríagua"); break; 

		}
		case 4: 
			if(sig == 3 || sig == 7 || sig == 11){
			printf("\nEl signo zodiacal que elijo pertenece a la categorífuego");

		} break;
		default:
		printf ("\nEl nú que dijito ni pertenece a ningúgno zodiacal"); break; 
		
	}
}
