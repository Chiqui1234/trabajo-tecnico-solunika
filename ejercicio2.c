/*  NOTA:
    El ejercicio dice: "y si son números, decir cuales son palíndromas (capicúa)". Tengo entendido que las palabra palíndromas y números capicúas necesitan al menos dos dígitos para corroborar esta propiedad (capicúa o no), así que voy a tomar los valores en el órden de entrada para chequear si juntos forman un número capicúa.
    */
#include "funciones.h"

int main()
{
    char valores[CANT2] = "";
    int numeros[CANT2] = {0}; // Se usa sólo si todos los valores son números
    BOOL sonNumeros = FALSE;
    printf("Mi tarea es recibir 4 valores que, si son números, se indica si son capicúa (juntos) y los imprimo de menor a mayor. :D\n");
    for(int i = 0;i < CANT1;i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%c", &valores[i]);
    }

    if( (sonNumeros = strToInt(valores, numeros, CANT2)) ) // Devuelve TRUE si todos los valores (char) se pudieron convertir a números exitosamente
    {
        imprimirCapicua(numeros, CANT2); // Imprime en pantalla si el conjunto de nros ingresados por el usuario forman un valor capicúa
        ordenarNumeros(numeros, CANT2); // Ordeno los números de menor a mayor
        for(int i = 0;i < CANT2;i++)
            printf("Número %d: %d", i+1, numeros[i]); // Imprimo los números
    }

}