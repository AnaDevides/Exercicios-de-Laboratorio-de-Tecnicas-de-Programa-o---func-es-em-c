#include <stdio.h>
#include <conio.h>
#include <math.h>


int a;

void entrada(){
	printf("Insira um valor: ");
	scanf("%i", &a);

}

bool verifica(int a){
    
    if(a % 2 ==  0){ 
    	return true;  	
	}
	else{
		return false;
	}
	
	 
    
}

int main(){
    
    entrada();

	if (verifica(a))
       printf("--PAR--");
    else
       printf("--IMPAR--");
    

    return 0;
}

