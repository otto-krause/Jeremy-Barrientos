#include <stdio.h>
#include <stdLib.h>

void My(int a,int b);

int main() 
{
	
	int a=0,b=0;
	printf("Ingrese Un Numero: \n");
	scanf("%d",&a);
	printf("Ingrese Otro Numero: \n");
	scanf("%d",&b);
	
	My(a,b);
	
	system("pause");
	return 0;	
}
void My(int a,int b)
{
	if   (a == b)
		printf("Los Numeros Ingresados son Iguales \n\n");
	else
	{
	if(a > b)
	printf("El Numero Mayor es: %d\n\n",a);
	else
	printf("El Numero Mayor es: %d\n\n",b);
 }
}

