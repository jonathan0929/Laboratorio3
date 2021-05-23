/**
* @file ./src/ejercicio1/triangular.c
* @brief imprime al ususarios los primeros 100 numeros triangulares.
*
*
* @author Jonathan Monge
* @date 19/05/2021
*/

#include <stdio.h>

/**
* @brief Funcion principal
*
* Imprime al usuario los primeros 100 numeros triangulares calculados mediante una operacion matematica en un bucle for
*
* @param void
* @return valor entero 0
*/ 

int main(void)
{
	int num = 100;
	int i;
	printf("\nPrimeros 100 numeros triangulares");
	printf("\n");

	for(i = 0; i <= num; i++)
	{
		int res = (i*(i+1))/2;
		printf("%i: %i\n", i, res);
	}
	return 0;
}