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

} ;

int main()
{
    // Definicion de variables

    struct texto libro ;

    // Semilla de numero aleatorio
    srand(time(0)) ;

    // Lectura de datos
    for(int i=0;i<numLIB;i++)
    {
            printf("titulo:  ") ; gets(libro.titulo) ;
            printf("autor:   ") ; gets(libro.autor) ;
            libro.codigo = 4000 + i ;
            printf("codigo:  %d\n", libro.codigo) ;
            printf("isbn:    ") ; gets(libro.isbn) ;
            libro.paginas = 150 + rand() % 931 ;
            printf("paginas: %d\n", libro.paginas) ;
            libro.precio = 60.0 + rand()%90 + rand()/(float)RAND_MAX ;
            printf("precio:  %.2f\n", libro.precio) ;
            printf("\n") ;
    }

    // Reporte
    printf("\n") ;
    printf("%15s %15s %5s %15s %5s %10s\n\n",
           "TITULO",
           "AUTOR",
           "COD.",
           "ISBN",
           "PAGS",
           "PRECIO") ;

    for(int i=0;i<numLIB;i++)
    {
        printf("%15s %15s %5d %15s %5d %10.2f\n",
               libro.titulo,
               libro.autor,
               libro.codigo,
               libro.isbn,
               libro.paginas,
               libro.precio) ;
    }
}
