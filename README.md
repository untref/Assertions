### Assertions

Este es un conjunto de herramientas con fines didácticos pensado para los alumnos de Algoritmos y Programación III así como tambíén para alumnos de Lenguajes y Programación III.

Ejemplo de uso:

```
#include <stdio.h>
#include <stdlib.h>

#include "assertion.h"

int main()
{
	setupTestEnv();
	assert(0,1);		// assertion - falla y muestra donde
	assert(0,0);
	deny(0,1);
	deny(0,0);			// deny - falla y muestra donde 


	// Assert y deny para comprobar strings
	assertStr("123", "12");
	denyStr("123", "12");


	// Los parámetros pueden ser expresiones
	assert( 2 + 2, 5);

	return 0;
}
```
