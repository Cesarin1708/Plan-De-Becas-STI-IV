#include<stdio.h>
int main(){
	char ma[4][13]={{'q','w','e','r','t','y','u','i','o','p','a','s','d'},{'f','g','h','j','k','l','z','x','c','v','b','n','m'},{'n','m','b','v','c','x','z','l','k','j','h','g','f'},{'d','s','a','p','o','i','u','y','t','r','e','w','q'}};
	int j,i,k,m=1,a,b,c,d,intentos=1;
	printf("**********************************************\n");
	printf("*Bienvenido a esta maravillosa sopa de letras*\n");
	printf("**********************************************\n");
	printf("1  2  3  4  5  6  7  8  9 10 11 12 13\n"); 
	for(i=0;i<4;i++){
		
		for(j=0;j<13;j++){
			
			printf("%c  ",ma[i][j]);
			
		}
		printf(" %d",m++);
		printf("\n");
	}
	printf("Instruciones:Encuentra todos los pares de las letras presentadas en sopa\nEjemplo:\na=3,4 11,1\n");
		while(intentos<=26){
			intentos ++;
			printf("\nDigite la cordenada de la primera letra: ");
			scanf("%i,%i",&a,&b); 
			printf("Digite la cordenada de la segunda letra: ");
			scanf("%i,%i",&c,&d);

			if(a==3 && b==4 && c==11 && d==1 || a==11 && b==1 && c==3 && d==4 ){
				printf("Acertaste la cordenada de la letra a");	
			}
			else if(a==3 && b==3 && c==11 && d==2 || a==11 && b==2 && c==3 && d==3){
				printf("Acertaste la cordenada de la letra b");
			}
			else if(a==5 && b==3 && c==9 && d==2 || a==9 && b==2 && c==5 && b==3){
				printf("Acertaste la cordenada de la letra c");
			}
			else if(a==5 && b==3 && c==9 && d==2 || a==9 && b==2 && c==5 && d==3){
                                printf("Acertaste la cordenada de la letra d");
                        }
			else if(a==3 && b==1 && c==11 && d==4 || a==11 && b==4 && c==3 && d==1){
                                printf("Acertaste la cordenada de la letra e");
                        }
                        else if(a==1 && b==2 && c==13 && d==3 || a==13 && b==3 && c==1 && b==2){                  
                                printf("Acertaste la cordenada de la letra f");
                        }
                        else if(a==12 && b==3 && c==2 && d==2 || a==2 && b==2 && c==13 && d==3){
                                printf("Acertaste la cordenada de la letra g");
                        }
			else if(a==3 && b==2 && c==11 && d==3 || a==11 && b==3 && c==3 && d==2){
                                printf("Acertaste la cordenada de la letra h");
                        }
                        else if(a==8 && b==1 && c==6 && d==4 || a==6 && b==4 && c==8 && b==1){                  
                                printf("Acertaste la cordenada de la letra i");
                        }
			else if(a==4 && b==2 && c==10 && d==3 || a==10 && b==3 && c==4 && d==2){
                                printf("Acertaste la cordenada de la letra j");
                        }
                        else if(a==9 && b==3 && c==5 && d==2 || a==5 && b==2 && c==9 && b==3){                  
                                printf("Acertaste la cordenada de la letra k");
                        }
                        else if(a==8 && b==3 && c==6 && d==2 || a==6 && b==2 && c==8 && d==3){
                                printf("Acertaste la cordenada de la letra l");
                        }
			else if(a==2 && b==3 && c==13 && d==2 || a==13 && b==2 && d==2 && d==3){
				printf("Acertaste la cordenada de la letra m");
			}
			else{
				 printf("Error las cordenadas digitadas no corresponden a ningun par de letras");
			}

		}
}	
