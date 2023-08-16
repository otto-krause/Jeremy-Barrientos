#include <stdio.h>
#include <stdLib.h>

void Rest(float r1,float r2,float r3,float r4,float r5);
void Ret (float r1,float r2,float r3,float r4,float r5);

int main() 
{
	float r1=0,r2=0,r3=0,r4=0,r5=0;
	printf("Ingrese La Resistencia 1 \n");
	scanf("%f",&r1);
	printf("Ingrese La Resistencia 2 \n");
	scanf("%f",&r2);
	printf("Ingrese La Resistencia 3 \n");
	scanf("%f",&r3);
	printf("Ingrese La Resistencia 4 \n");
	scanf("%f",&r4);
	printf("Ingrese La Resistencia 5 \n");
	scanf("%f",&r5);
	
	Rest(r1,r2,r3,r4,r5);
	Ret (r1,r2,r3,r4,r5);
	system("pause");
	return 0;	
}
void Rest(float r1,float r2,float r3,float r4,float r5)
{
	
	printf("Las Resistencias Ingresadas son las siguientes: \n");
	printf("R1 = %.1f\n",r1);
	printf("R2 = %.1f\n",r2);
	printf("R3 = %.1f\n",r3);
	printf("R4 = %.1f\n",r4);
	printf("R5 = %.1f\n",r5);
	
} 
void Ret(float r1,float r2,float r3,float r4,float r5){
	float Rt=0;
	Rt= r1 + r2 + r3 + r4 + r5;
	printf("La Resistencia Total es: %.2f\n",Rt);
}


