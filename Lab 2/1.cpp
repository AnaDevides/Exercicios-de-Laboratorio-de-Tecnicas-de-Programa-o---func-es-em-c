#include <stdio.h>
#include <conio.h>
#include <math.h>


int a,b,c;

void entrada(){
	printf("\n\n--INSIRA SUA IDADE EM ANOS MESES E DIAS--\n\n");
	printf("Insira quantos anos possui: ");
	scanf("%i", &a);
	printf("Insira quantos meses possui: ");
	scanf("%i", &b);
	printf("Insira quantos dias possui: ");
	scanf("%i", &c);
}

void imprime(int resultado){
	printf("Sua idade em dias %i\n", resultado);
	
}



void dias(int a, int b, int c){
    
    int resultado=0;
    
    resultado = (a*365) + (b*30) + c;
   	 
   	 
 		imprime(resultado);
	 
    
}

int main(){
    
    entrada();

    dias(a,b,c);

    return 0;
}



