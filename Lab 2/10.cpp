#include <stdio.h>
#include <conio.h>
#include <math.h>


float a;
char s;

void entrada(){
	printf("Insira sua altura: ");
	scanf("%f", &a);
	printf("DIGITE (M) Para masculino ou (F) Para feminino: \n");
	scanf(" %c", &s);

}

void imprime(float pesoideal){
	printf("Seu peso Ideal == %.2f: ",pesoideal);
}

void pesoIdeal(float a, char s){
    float pesoideal=0;
    if(s == 'f'){ 	
    	pesoideal = (72.7 *a)-58;	
	}
	else{
		pesoideal = (62.1*a)-44.7;
	}
	
	 imprime(pesoideal);
    
}

int main(){
    
    entrada();

 	pesoIdeal(a,s);
    
    

    return 0;
}

