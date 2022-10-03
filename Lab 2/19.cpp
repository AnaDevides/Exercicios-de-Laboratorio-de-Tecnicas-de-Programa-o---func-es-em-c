#include <stdio.h>

#include <stdlib.h>

int num;
int i;


int conta_divisores(int num)
{
    int div = 0;
    
    for(int i = num; i>0; i--)
    {
        if(num%i==0) div++;
    }
    return div;
}


void entrada(){
	printf (" INFORME UM NUMERO  : \n");

	scanf (" %i", & num);	
}




int main()


{


entrada();
printf("Numero de divisores = %i",conta_divisores(num));
return 0;

}
