#include <stdio.h>

// Declaración de la función MENSAJE
void MENSAJE(int num) {
    if (num >= 1 && num <= 5) {
        printf("Usted ingresó un número menor a 6.\n");
    } else if (num >= 6 && num <= 10) {
        printf("Usted ingresó un número mayor a 5.\n");
    }
}

int main() {
    int numero;

    // Solicitar el número al usuario hasta que sea válido
    do {
        printf("Ingrese un número entre 1 y 10: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 10) {
            printf("Número fuera de rango. Intente de nuevo.\n");
        }
    } while (numero < 1 || numero > 10);

    // Invocar a la función MENSAJE
    MENSAJE(numero);

    return 0;
}
