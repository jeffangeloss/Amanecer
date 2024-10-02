#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numLIB 3

struct texto
{
    char titulo[30] ;
    char autor[25] ;
    int codigo ;
    char isbn[13] ;
    int paginas ;
    float precio ;
    int cantidad ;
} ;

int main()
{
    // Definicion de variables

    struct texto libro[numLIB] ;

    // Semilla de numero aleatorio
    srand(time(0)) ;

    // Lectura de datos
    for(int i=0;i<numLIB;i++)
    {
            printf("titulo:   ") ; gets(libro[i].titulo) ;
            printf("autor:    ") ; gets(libro[i].autor) ;
            libro[i].codigo = 4000 + i ;
            printf("codigo:   %d\n", libro[i].codigo) ;
            printf("isbn:     ") ; gets(libro[i].isbn) ;
            libro[i].paginas = 150 + rand() % 931 ;
            printf("paginas:  %d\n", libro[i].paginas) ;
            libro[i].precio = 60.0 + rand()%90 + rand()/(float)RAND_MAX ;
            printf("precio:   %.2f\n", libro[i].precio) ;
            libro[i].cantidad = 20 + rand() % 31 ;
            printf("cantidad: %d\n", libro[i].cantidad) ;
            printf("\n") ;
    }

    // Reporte
    printf("\n") ;
    printf("%15s %15s %5s %15s %5s %10s %10s\n\n",
           "TITULO",
           "AUTOR",
           "COD.",
           "ISBN",
           "PAGS",
           "PRECIO",
           "CANTIDAD") ;

    for(int i=0;i<numLIB;i++)
    {
        printf("%15s %15s %5d %15s %5d %10.2f %10d\n",
               libro[i].titulo,
               libro[i].autor,
               libro[i].codigo,
               libro[i].isbn,
               libro[i].paginas,
               libro[i].precio,
               libro[i].cantidad) ;
    }
}
