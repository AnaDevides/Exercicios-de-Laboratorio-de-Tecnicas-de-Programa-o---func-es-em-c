#include <stdio.h>
#include <conio.h>
#include <math.h>


int a,b,c;

void entrada(){
	printf("\n\n--INSIRA SUA IDADE EM ANOS MESES E DIAS--\n\n");
	printf("Insira um numero: ");
	scanf("%i", &a);

}

bool verifica(int a){
    
    int soma;
    int i;
    for(i=1; i<a; i++){
    	
    if(a%i == 0){
    	soma+=i;
	}
    	
	}
    
    if(soma != a){ 
    	return false;  	
	}
	else{
		return false;
	}
	
	 
    
}

int main(){
    
    entrada();

	if (verifica(a))
       printf("Numero Perfeito");
    else
       printf("Nao Perfeito");
    

    return 0;
}



