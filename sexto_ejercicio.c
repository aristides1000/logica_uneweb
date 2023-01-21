/*
	tipos de variables en C
		- int -> alamacena numeros enteros, sin
		los decimales, ejemplos: 1, 23, 564, -3
		- float -> almacena un numero de coma
		flotante o decimales, ejemplos: 5.5, -5.5
		-char -> es un caracter simple o unico,
		ejemplo 'a', 'B'
*/

#include <stdio.h>

int main()
{
	int myNum = 15;

	int otherNum;

	otherNum = 15;
/*
	printf(myNum); // Este codigo dara error por
	falta de formato.
*/
	printf("%d", myNum);

	return 0;
}
