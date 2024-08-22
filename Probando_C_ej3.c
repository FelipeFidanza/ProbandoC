#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int x=100, y=25;
int sum = x + y;
int res = x - y;
int mul = x * y;
int die = x / y;
int ree = x % y;
printf("Resultado de la Suma es: %d\n", sum);
printf("Resultado de la Resta es: %s\n", res);
printf("Resultado de la Multiplicación es: %d\n", mul);
printf("Resultado de la División entera es: %d\n", die);
printf("Resultado de la Resto de la División entera es: %d\n",ree);
system("pause");
return 0;
}

