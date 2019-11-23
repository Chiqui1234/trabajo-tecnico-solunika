#include "funciones.h"
/**
 * @param int *numeros espera un puntero o array
 * @param int cant limita la cantidad de ciclos a recorrer
 */
void ordenarNumeros(int *numeros, int cant)
{
    // Esto es un burbujeo (bubble sort) convencional
    int i = 0, j = 0;
    int aux;
    for(int i = 0;i < cant;i++)
    {
        for(int j = 0;j < cant-1-i;j++) // -1 para no irme del rango de numeros[] y -i para ahorrar ciclos (se supone que en cada ciclo del for() grande organizo al menos un número)
        {
            if( *(numeros+j) > *(numeros+j+1)  ) // Si el número actual es mayor al siguiente
            {
                aux = *(numeros+j+1); // Guardo el siguiente en un auxiliar
                *(numeros+j+1) = *(numeros+j); // Sobre-escribo el siguiente con el número actual
                *(numeros+j) = aux; // Restauro el número siguiente para re-ubicarlo en la posición actual :)
            }
        }
    }   
}
/**
 * @param char valores[] espera un conjunto de caracteres que analizará para determinar si son números
 * @param int numeros[] es un array dónde se almacenan los números que se convirtieron de string a int
 * @param int cant limita la cantidad de ciclos a recorrer
 */
BOOL strToInt(char valores[], int numeros[], int cant)
{
    int j = 0; // Este contador evita los casos dónde hay un caracter que no puede ser parseado a int. De tal forma que no habrá "espacios en blanco" en numeros[]. En este ejercicio no sirve de mucho pero sería útil en otros ámbitos
    for(int i = 0;i < cant;i++)
    {
        if( isalpha(valores[i]) != 0 ) // Si es != 0 se debe a que encontró una letra
            return FALSE;
        else // Si es un número, lo convierto
            numeros[j] = parseInt(valores[i]);
        j++;
    }
        
}

void imprimirCapicua(int numeros[], int cant)
{
    for(int i = 0;i < cant;i++)
    {
        if(numeros[i] != numeros[cant-i])
            return; // Si son distintos éste número no es capicúa y salgo de la función
    }
    printf("¡El número es capicúa! ");
    for(int i = 0;i < cant;i++)
        printf("%d", numeros[i]);
}