#include <stdio.h>

#include <stdlib.h>

float a, b,c;

void entrada(){
	

printf (" NUMERO 1 : \n");

scanf (" %f", & a);

printf (" NUMERO 2 : \n");

scanf (" %f", & b);

printf (" NUMERO 3 : \n");

scanf (" %f", & c);

}

void calculo(float a, float b, float c){

printf (" CRESCENTE : ");

if (a > c) {

float cres = c;

c = a;

a = cres;

}

if (a > b) {

float cres = b;

b = a;

a = cres;

}

if (b > c) {

float cres = c;

c = b;

b = cres;

}
printf("%.2f / %.2f / %.2f", a, b, c);
}


int main()


{


entrada();
calculo(a,b,c);
return 0;

}
