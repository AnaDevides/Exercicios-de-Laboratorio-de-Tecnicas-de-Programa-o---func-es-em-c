#include <stdio.h>
#include <conio.h>
#include <math.h>


float a,b,c;

void entrada(){
	printf("Digite o valor do termo a: ");
	scanf("%f", &a);
	printf("Digite o valor do termo b: ");
	scanf("%f", &b);
	printf("Digite o valor do termo c: ");
	scanf("%f", &c);
}

void imprime(float x1, float x2){
	printf("O valor de x1: %.2f\n", x1);
	printf("O valor de x2: %.2f\n", x2);
}



void Bhaskara(float a, float b, float c){
    float delta,x1,x2;
   	 delta = b*b - 4*a*c;
   	 x1 = (-b + sqrt(delta)) / (2*a);
 	 x2 = (-b - sqrt(delta)) / (2*a);
 	if(delta < 0) {
		printf("A equacao nao possui raizes reais.\n");
 	}
 	else{
 		imprime(x1,x2);
	 }
    
}

int main(){
    
    entrada();

    Bhaskara(a,b,c);

    return 0;
}



