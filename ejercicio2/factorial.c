/**
* @file ./src/ejercicio2/factorial.c
* @brief Recibe un acaracter ingresado por el usuario, verifica si se tarta de una vocal o consonante y lo imprime.
*
*
* @author Jonathan Monge
* @date 19/05/2021
*/

#include <stdio.h>

/**
* @brief Función factorial encargada de calcualr el numero ingresado por el usuario en la funcion main. 
*
* Recibe el numero ingresado por el usuario en la funcion principal y calcula el factorial mediante un bucle while 
*
* @param int n, arreglo que recibirá el numero ingresado
* @return variable tipo entero i con el resultado del calculo
*/

int factorial(int n)
{
	int i = 1; 
	while(n > 1)
	{
		i = i * n;
		n = n - 1;
	}
	
	return i;
}

/**
* @brief Funcion principal
*
* Solicita al usuario ingresar un numero para calcular su factorial
*
* @param void
* @return valor entero 0
*/ 

int main(int argc, char *argv[])
{
	int num;
	printf("\nIgrese un numero para calcular su factorial\n");
	scanf("%d", &num);
	int fac4 = factorial(num);

	printf("%d! = %d\n", num, fac4);
	return 0;
}