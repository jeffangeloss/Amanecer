#include <stdio.h>

// Declaración de la función para listar las notas
void listarNotas(float notas[], int tamanho) {
    printf("\nLista de notas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Alumno %d: %.2f\n", i + 1, notas[i]);
    }
}

int main() {
    float notas[10];
    int opcion;

    // Ingreso de las notas de los 10 alumnos
    printf("Ingrese las notas de 10 alumnos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Menú de opciones
    do {
        printf("\nMenu de opciones:\n");
        printf("1. Listar notas\n");
        printf("2. Calcular la media\n");
        printf("3. Calcular el menor\n");
        printf("4. Calcular el mayor\n");
        printf("5. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                listarNotas(notas, 10);  // Llamada a la función para listar notas
                break;
            case 2:
                printf("En proceso... (Calcular la media)\n");
                break;
            case 3:
                printf("En proceso... (Calcular el menor)\n");
                break;
            case 4:
                printf("En proceso... (Calcular el mayor)\n");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}
