#include <stdio.h>
#include <stdLib.h>

void SP(int a,int b);

int main() 
{
	
	int a=0,b=0;
	printf("Ingrese Un Numero: \n");
	scanf("%d",&a);
	printf("Ingrese Otro Numero: \n");
	scanf("%d",&b);
	
	SP(a,b);
	
	
	system("pause");
	return 0;	
}
void SP(int a,int b)
{
	printf("El primer numero ingresado es: %d\n\n",a);
	
	printf("El segundo numero ingresado es: %d\n\n",b);
	
}

