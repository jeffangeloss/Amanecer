#include <stdio.h>
#include <string.h>

// Definir la estructura para un integrante
struct Integrante {
    char nombre[100];
    char tema[100];
    int codigo;
};

int main() {
    int n;
    printf("Ingrese la cantidad de integrantes:");
    scanf("%d",&n);
    getchar();
    struct Integrante grupo[n];
    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del integrante %d: ", i + 1);
        fgets(grupo[i].nombre, 100, stdin);
        grupo[i].nombre[strlen(grupo[i].nombre) - 1] = '\0';

        printf("Ingrese el tema del integrante %d: ", i + 1);
        fgets(grupo[i].tema, 100, stdin);
        grupo[i].tema[strlen(grupo[i].tema) - 1] = '\0';

        printf("Ingrese el codigo del integrante %d: ", i + 1);
        scanf("%d", &grupo[i].codigo);
        getchar();
    }
    //Mostrar
    printf("--------------------------------------------------------------------");
    for (int i = 0; i < n; i++) {
        printf("Integrante %d: %s\n", i + 1, grupo[i].nombre);
        printf("Tema: %s\n", grupo[i].tema);
        printf("Codigo: %d\n\n", grupo[i].codigo);
    }
    return 0;
}
