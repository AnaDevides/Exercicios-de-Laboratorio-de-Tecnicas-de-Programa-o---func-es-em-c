#include <stdio.h>

#include <stdlib.h>

int a;
int i;


int calculom(int a,int maior){
if (a > maior){//se o numero for maior que a vari�vel "maior"
maior = a;//armazena na vari�vel
}
return(maior);
}
int calculome(int a,int menor){
if (a < menor){//se o numero for menor que a vari�vel "menor"
menor = a;//o numero sera armazenado na vari�vel
}
return(menor);
}

void entrada(){
int maior=0, menor=9999;
for(i=1; i<=50; i++){
	printf (" INFORME UM NUMERO  : \n");

	scanf (" %i", & a);	
	maior = calculom( a, maior);	
	menor = calculome( a, menor);	
}
printf ("o maior numero e %i e o menor e %i\n", maior, menor);// mostra na tela o valor do numero maior e do numero menor


}




int main()


{


entrada();
return 0;

}
