#include <stdio.h>
#include <stdLib.h>

void total(int h,int m);
int main() 
{
	
	int h=0,m=0;
	printf("Ingrese Cantidad de Hombres postulados:\n");
	scanf("%d",&h);
	printf("Ingrese Cantidad de Mujeres postuladas:\n");
	scanf("%d",&m);
	
	total(h,m);
	
	system("pause");
	return 0;	
}
void total(int h,int m)
{
	int total = 0;
	total = h + m;
	float prom = (m * 100.0) / total;
	float promh = (h * 100.0) / total;       
	printf("El Porcentajes de Hombres postulados son: %.2f\n",promh);
	printf("El Porcentaje de Mujeres postuladas es de: %.2f \n",prom); 
	
}

