#include <stdio.h>
#include <stdLib.h>

int P(float F,float A);

int main() 
{
	float F=0,A=0;
	printf("Ingrese el valor de la Fuerza: \n");
	scanf("%f",&F);
	printf("Ingrese el valor del Area : \n");
	scanf("%f",&A);
	
	P(F,A);
	
	system("pause");
	return 0;	
}
int P(float F,float A)
{
	float Pre = 0;       
	Pre = F/A ;
	printf("Presion es de: %.2f\n\n",Pre);
return P;
}


