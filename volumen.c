#include<stdio.h>
#define pi 3.14
int main(){
	int radio;
	float volumen;
	
	printf("Ingresa un radio: \n");  //la barra y n es un salto de linea
	
	scanf("%d", &radio);
	
	printf("radio: %d \n", radio);
	
	volumen = (4/3)*pi*radio*radio*radio;
	
	printf("volumen: %f \n", volumen);
	
	system("pause");

	return 0;
}
