#include <stdio.h>
#include <conio.h>
#include <math.h>


int a;

void entrada(){
	printf("Insira um numero: ");
	scanf("%i", &a);

}

bool verifica(int a){
    
    if(a >= 0){ 
    	return true;  	
	}
	else{
		return false;
	}
	
	 
    
}

int main(){
    
    entrada();

	if (verifica(a))
       printf("--POSITIVO--");
    else
       printf("--NEGAIVO--");
    

    return 0;
}



