#include <stdio.h>

struct Integrantes
{
    char nombre[100];
    char tema[100];
    int codigo; 
};

int main()
{
    int n;
    printf("Ingrese la cantidad de integrantes del grupo: ");
    scanf("%d",&n);
    
    struct Integrantes integrante[n];
    
    getchar();
    
    for (int i = 0 ; i < n ; i++) {
        printf ("INTEGRANTE %d\n", i + 1);
        printf("Ingrese el nombre: ");
        fgets(integrante[i].nombre, 100, stdin);
        printf("Ingrese el tema: ");
        fgets(integrante[i].tema , 100 , stdin);
        printf("Ingrese el codigo de alumno: ");
        scanf("%d", &integrante[i].codigo);
        
        getchar();
    }
    
    printf("\n----Informacion del grupo----\n");
    
    for (int j = 0 ; j < n ; j++) {
        printf("\nIntegrante %d: %s", j +1 , integrante[j].nombre);
        printf("\nTema: %s ", integrante[j].tema);
        printf("\nCodigo: %d\n\n", integrante[j].codigo);
    }
    
return 0;
}
