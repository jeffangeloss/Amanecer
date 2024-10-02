#include <stdio.h>
int listarNotas(int notas[], int tamanho) {
    printf("Lista de notas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Alumno %d: %d\n", i + 1, notas[i]);
    }
}

int main() {
    int notas[10];
    int opcion;
    printf("Ingrese las notas de 10 alumnos:\n");
    for (int i = 0; i < 10; i++){
        printf("Nota del alumno %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    do{
        printf("Operaciones con Notas de alumnos:\n");
        printf("1. Listar notas\n");
        printf("2. Calcular media\n");
        printf("3. Calcular menor\n");
        printf("4. Calcular mayor\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        printf("-------------------------------------------------------------\n");
        switch (opcion) {
            case 1:
                listarNotas(notas, 10);
                printf("-------------------------------------------------------------\n");
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
    }while (opcion != 5); //La opción de salir servirá evidentemente, solo para salir.
    return 0;
}
    