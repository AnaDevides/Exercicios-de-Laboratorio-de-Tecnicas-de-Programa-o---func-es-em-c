/*
Fa ¸ca uma fun ¸c ~ao que leia um n ´umero n ~ao determinado de valores positivos e retorna
a m ´edia aritm ´etica dos mesmos.
*/
#include <stdio.h>

#include <stdlib.h>
float a,total;

void entrada(){
	printf("Insira um numero: ");
	scanf("%f", &a);
	total+=a;
}

float media(float total, int cont){
	float result;

	
	result = total/cont;
	return result;
}

main(){
	int cont, continuar;
	do
    {
        printf("\n\tCalculo media aritimetica\n\n");
        printf("1. Insirir um numero\n");
        printf("2. media \n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                entrada();
                cont++;
                break;

            case 2:
              printf("%.2f\n", media(total,cont));
              printf("contador: %i", cont);
                break;

            case 0:
              
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
