#include "funciones.h"

int main()
{
    int numeros[CANT1] = {0};
    printf("Mi tarea es recibir 3 números y decirte el más grande, el del medio y el más chico :O\n");
    for(int i = 0;i < CANT1;i++)
    {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    ordenarNumeros(numeros, CANT1);

    printf("Número %s: %d\n", MAGIA(menor), numeros[0]);
    printf("Número %s: %d\n", MAGIA(del medio), numeros[1]);
    printf("Número %s: %d\n", MAGIA(mayor), numeros[2]);
}