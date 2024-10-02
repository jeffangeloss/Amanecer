#include <stdio.h>

// Definición de la estructura LICENCIA
struct LICENCIA {
    char dni[9];       // 8 dígitos para el DNI + 1 carácter para el terminador nulo
    char nombre[16];   // 15 caracteres + 1 para el terminador nulo
    char apellido[16]; // 15 caracteres + 1 para el terminador nulo
    char tipo;         // Tipo de licencia (A, B, C, D)
};

int main() {
    // Declaración de la variable de tipo LICENCIA
    struct LICENCIA LICENCIA1;

    // Solicitar los datos de la licencia
    printf("Ingrese el DNI (8 dígitos): ");
    scanf("%8s", LICENCIA1.dni);

    printf("Ingrese el nombre (hasta 15 caracteres): ");
    scanf("%15s", LICENCIA1.nombre);

    printf("Ingrese el apellido (hasta 15 caracteres): ");
    scanf("%15s", LICENCIA1.apellido);

    printf("Ingrese el tipo de licencia (A/B/C/D): ");
    scanf(" %c", &LICENCIA1.tipo);

    // Imprimir los datos de la licencia
    printf("\nDatos de la licencia ingresada:\n");
    printf("DNI: %s\n", LICENCIA1.dni);
    printf("Nombre: %s\n", LICENCIA1.nombre);
    printf("Apellido: %s\n", LICENCIA1.apellido);
    printf("Tipo de licencia: %c\n", LICENCIA1.tipo);

    return 0;
}
