#include <stdio.h>

#include <stdlib.h>

float a;
float i;


void tabuada(float a,float i){
float result;
	for(i=1; i<=a; i++){
	
	if(i == a){
		printf("%.2f X %.2f = %.2f^2\n",i,a,a);
	}else if(i ==1){
		printf("%.2f X %.2f = %.2f\n",i,a,a);
	}else{
		result = i * a;
		printf("%.2f X %.2f = %.2f\n",i,a,result);
	}
	
}
}

void entrada(){
	printf (" INFORME UM NUMERO  : \n");

	scanf (" %f", & a);	
}




int main()


{


entrada();
tabuada(a,i);
return 0;

}
