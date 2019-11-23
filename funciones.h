#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAGIA(x) (#x)
#define CANT1 3
#define CANT2 4

typedef enum // Para no importar stdbool.h sólo por ésto
{
    FALSE = 0, TRUE
} BOOL;

void ordenarNumeros(int *numeros, int cant);
BOOL strToInt(char valores[], int numeros[], int cant); // Intenta convertir los valores (char) dados a números enteros. Devuelve TRUE si todos los valores (char) se pudieron convertir a números exitosamente
void imprimirCapicua(int numeros[], int cant); // Imprime en pantalla si el conjunto de nros ingresados por el usuario forman un valor capicúa