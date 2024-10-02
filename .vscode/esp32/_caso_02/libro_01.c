#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Datos de libro

    char titulo[30] ;
    char autor[25] ;
    int codigo ;
    char isbn[13] ;
    int paginas ;
    float precio ;

    // Semilla de numero aleatorio
    srand(time(0)) ;

    // Lectura de datos
    printf("titulo:  ") ; gets(titulo) ;
    printf("autor:   ") ; gets(autor) ;
    codigo = 4000 ;
    printf("codigo:  %d\n", codigo) ;
    printf("isbn:    ") ; gets(isbn) ;
    paginas = 150 + rand() % 931 ;
    printf("paginas: %d\n", paginas) ;
    precio = 60.0 + rand()%90 + rand()/(float)RAND_MAX ;
    printf("precio:  %.2f\n", precio) ;

    // Reporte
    printf("\n") ;
    printf("%15s %15s %5d %15s %5d %10.2f\n",
           titulo, autor, codigo, isbn, paginas, precio) ;
}
