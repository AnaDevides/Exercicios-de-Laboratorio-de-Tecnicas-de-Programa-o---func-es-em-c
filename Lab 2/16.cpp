#include <stdio.h>

#include <stdlib.h>

void fat(int num) { //iniciando funcao

int i; //declarando variavel

int f=1;

for (i=1; i<=num; i++) { //laco de repeticao

f *= i; //formula



}
printf("Fatorial = %d\n", f); //resultado
}



int main(int argc, const char * argv[]) {

int num; //variavel

printf("Informe numero para fatorial: "); //solicitando ao usuario

scanf("%d", &num); //gravando

fat(num); //chamada da funcao

    return 0;
}
