#include <stdio.h>
#include <stdLib.h>

void Perimetro(int a,int b);
void Area(int a,int b); 

int main() 
{
	
	int a=0,b=0;
	printf("Ingrese el valor del lado 1 (a):\n");
	scanf("%d",&a);
	printf("Ingrese valor del lado 2 (b):\n");
	scanf("%d",&b);
	
	Perimetro(a,b);
	Area(a,b);
	
	system("pause");
	return 0;	
}
void Perimetro(int a,int b)
{
	int Per = 0;       
	Per = (2 * a) + (2 * b);
	printf("El Perimetro es de: %d\n\n",Per);
	
} 
void Area(int a,int b)
{
	int Ar = 0;
	Ar = a * b;
	printf("El Area es de: %d\n\n",Ar);
	
}


