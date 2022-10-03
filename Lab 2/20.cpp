#include <stdio.h>

#include <stdlib.h>

int num;
int i;


int somatorio(int num)
{
    int soma = 0;
   
    for(int i = 0; i <= num; i++)
    {
        soma+=i;
    }

    return soma;
}


void entrada(){
	printf (" INFORME UM NUMERO  : \n");

	scanf (" %i", & num);	
}




int main()


{


entrada();
printf("Somatorio = %i",somatorio(num));
return 0;

}
