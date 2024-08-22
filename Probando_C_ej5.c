//Realice un programa en C que dado un número entero, devuelva la suma de todos sus digitos:

#include<stdio.h>
#include <stdlib.h>

int main(){
	
int ent, aux, sum;
printf("Ingrese un entero: \n");
scanf("%d", &ent);
aux = ent;
sum = 0;
while (aux != 0) {
sum = sum + aux % 10;
aux = aux / 10;
}
printf("La suma de los digitos de %d es: %o\n", ent, sum);
system("pause");
return 0;	
	
}
