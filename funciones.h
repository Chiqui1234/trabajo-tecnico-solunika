#include <stdio.h> // printf(), scanf()
#include <stdlib.h> // atoi()
#include <string.h> // strlen()
#include <ctype.h> // isalpha()
#define MAGIA(x) (#x)
#define CANT1 3
#define CANT2 4

typedef enum // Para no importar stdbool.h sólo por ésto
{
    FALSE = 0, TRUE
} BOOL;

void ordenarNumeros(int *numeros, int cant);
BOOL esCharNumero(char valores[], int numeros[], int j, int cant); // Intenta convertir los valores (char) dados a números enteros. Devuelve TRUE si todos los valores (char) se pudieron convertir a un número de forma exitosa.
BOOL imprimirCapicua(char *valores); // Imprime en pantalla si el conjunto de nros ingresados por el usuario forman un valor capicúa