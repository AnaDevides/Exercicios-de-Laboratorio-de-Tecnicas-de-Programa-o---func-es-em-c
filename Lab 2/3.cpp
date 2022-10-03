# include <stdio.h>
# include <math.h>
main ()
{
int a,b,c;
float delta,x1,x2;
do
{
printf ("\nDIGITE O VALOR DE 'a' DIFERENTE DE 0. ");
scanf ("%d",&a);
}while (a==0);
printf ("\nDigite o valor de 'b'. ");
scanf ("%d",&b);
printf ("\nDigite o valor de 'c'. ");
scanf ("%d",&c);
delta=(pow(b,2))-(4*a*c);
printf ("\n\ndelta =%.4f.",delta);
if (delta<0)
printf ("\n\nDELTA MENOR QUE ZERO.\nNAO EXISTE RAIZ REAL.\n\n");
else
{
if (delta==0)
{
x1=-b/(2*a);
printf ("\n\nDELTA IGUAL A ZERO.\nA EQUACAO POSSUI DUAS RAIZER REAIS IGUAIS A %.4f.\n\n",x1);
}
else
{
x1=((-b)+(sqrt(delta)))/(2*a);
x2=((-b)-(sqrt(delta)))/(2*a);
printf ("\n\nA EQUACAO POSSUI DUAS RAIZES REAIS IGUAIS A: %.4f E %.4f.\n\n",x1,x2);
}
}
return 0;
}
