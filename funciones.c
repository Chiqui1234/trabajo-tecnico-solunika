#include "funciones.h"

/**
 * @param int *numeros espera un puntero o array
 * @param int cant limita la cantidad de ciclos a recorrer
 */
void ordenarNumeros(int *numeros, int cant)
{
    // Esto es un burbujeo (bubble sort) convencional
    int aux;
    BOOL cambios = TRUE;
    for(int i = 0;i < cant && cambios;i++)
    {
        cambios = FALSE;
        for(int j = 0;j < cant-1-i;j++) // -1 para no irme del rango de numeros[] y -i para ahorrar ciclos (se supone que en cada ciclo del for() grande organizo al menos un número)
        {
            if( *(numeros+j) > *(numeros+j+1)  ) // Si el número actual es mayor al siguiente
            {
                aux = *(numeros+j+1); // Guardo el siguiente en un auxiliar
                *(numeros+j+1) = *(numeros+j); // Sobre-escribo el siguiente con el número actual
                *(numeros+j) = aux; // Restauro el número siguiente para re-ubicarlo en la posición actual :)
                cambios = TRUE;
            }
        }
    }   
}
/**
 * @param char valores[] espera un conjunto de caracteres que analizará para determinar si son números
 * @param int numeros[] es un array dónde se almacenan los números que se convirtieron de string a int
 * @param int j se usa para no dejar baches en numeros[], en el caso de que el parámetro valores[] no sea un número
 * @param int cant limita la cantidad de ciclos a recorrer
 */
BOOL esCharNumero(char valores[], int numeros[], int j, int cant)
{
    for(int i = 0;i < cant;i++)
        if( isalpha(valores[i]) != 0 ) // Si es != es porque encontró una letra
            return FALSE;
    // Si no se encontró una letra
    numeros[j] = atoi(valores);
    return TRUE;
}
BOOL imprimirCapicua(char *valores)
{
    int largo = strlen(valores);
    for(int i = 0;i < largo;i++)
    {
        if( *(valores+i) != *(valores+largo-i-1) || largo < 3 || isalpha(*(valores+i)) != 0 ) // Si != 0 es porque encontró una letra.
            return FALSE;
    }
    printf("^ ¡El número es capicúa!\n");
    return TRUE;
}
