#include <stdio.h>

int main() {
    // Declaración e inicialización del arreglo
    int numero[5] = {10, 20, 30, 40, 50};

    // Imprimir los valores de cada elemento del arreglo
    for (int i = 0; i < 5; i++) {
        printf("Valor del elemento %d: %d\n", i + 1, numero[i]);
    }

    // Declaración de los punteros
    int *pnum1 = &numero[0];
    int *pnum3 = &numero[2];
    int *pnum5 = &numero[4];

    // Imprimir las direcciones de memoria
    printf("\nDirección de memoria del primer elemento: %p\n", (void*)pnum1);
    printf("Dirección de memoria del tercer elemento: %p\n", (void*)pnum3);
    printf("Dirección de memoria del quinto elemento: %p\n", (void*)pnum5);

    // Cambiar los valores usando punteros
    *pnum1 = 15;  // Cambia el primer elemento a 15
    *pnum5 = 55;  // Cambia el quinto elemento a 55

    // Imprimir los nuevos valores
    printf("\nNuevos valores del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor del elemento %d: %d\n", i + 1, numero[i]);
    }

    // Usar aritmética de punteros para leer e imprimir el cuarto elemento
    printf("\nValor del cuarto elemento usando punteros: %d\n", *(pnum1 + 3));

    return 0;
}
