/**
* @file ./src/ejercicio3/vocal.c
* @brief Recibe un acaracter ingresado por el usuario, verifica si se tarta de una vocal o consonante y lo imprime.
*
*
* @author Jonathan Monge
* @date 19/05/2021
*/

#include <stdio.h>

int identificador(char letra);

/**
* @brief Funcion principal
*
* Solicita al usuario ingresar un caracter, llama a la funcion identificador pasandole el caracter e imprime la respuesta al usuario.
*
* @param void
* @return valor entero 0
*/ 

int main(void)
{
	char letra; //variable que almacena el caracter registrado
	printf("Digite una letra: \n");
	scanf("%c", &letra);
	printf("El caracter ingresado es: %c\n", letra);

	int resultado = identificador(letra); //llamada a la funcion identificador
	if (resultado == 1)
		printf ("\nLa letra %c es una vocal\n",letra);
	else if (resultado == 2)
		printf ("\nLa letra %c es una consonante\n", letra);
	else if (resultado == 3)
		printf("\nNo es ua letra\n"); 
	return 0;
}

/**
* @brief Función indentificador encargada de verificar que tipo de caracter es el ingredsado en main. 
*
* Recibe el caracter ingresado por el usuario en la funci[on principal e identifica si se trata de una vocal, consonante o ninguna de estas, segun el resultado se retorna un valor u otro.
*
* @param char letra, arreglo que recibirá el caracter generado
* @return variable tipo entero contador con el valor arrojado segun si es vocal o consonante
*/

int identificador(char letra)
{
	char c = letra;
	int contador = 0;
	if (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U')
		contador = 1;
   	else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   		contador = 2;
   	else
   		contador = 3;
    return contador;
}