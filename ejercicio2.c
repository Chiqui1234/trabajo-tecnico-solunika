#include "funciones.h"

int main()
{
    char valores[CANT2+1] = ""; // char porque el ejercicio dice que tengo que comprobar si los valores son números o no. Se da a entender que el usuario podría poner letras también
    int numeros[CANT2] = {0}; // Acá almaceno los números ingresados por el usuario (si hubo), para luego ordenarlos
    int j = 0;
    printf("Mi tarea es recibir %d valores para decirte si son capicúas y ordenartelos de menor a mayor.\n", CANT2);
    for(int i = 0;i < CANT2;i++)
    {
        memset(valores, '\0', CANT2+1);
        printf("Valor %d: ", i+1);
        scanf("%s", valores);
        imprimirCapicua(valores); // Imprime el número sólo si es capicúa
        if( esCharNumero(valores, numeros, j, CANT2) )
            j++;
    }
    ordenarNumeros(numeros, j);
    for(int i = 0;i < j;i++)
        printf("Número %d: %d\n", i, numeros[i]);
}