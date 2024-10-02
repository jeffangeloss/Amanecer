#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numDIAS 20

int main()
{
    // Definicion de variables

    int n_horas[numDIAS] ;
    float salario_A[numDIAS], salario_B[numDIAS], salario_C[numDIAS] ;

    // Semilla random

    srand(time(0)) ;

    // Procesamiento de datos

    int i = 0 ;
    do
    {
        n_horas[i] = 3 + rand() % 6 ;
        salario_A[i] = 20 + 5*n_horas[i] ;
        salario_B[i] = 18 + 7*n_horas[i] ;
        salario_C[i] = 25 + 3*n_horas[i] ;

        i++ ;
    }
    while(i<numDIAS) ;

    // Reporte de resultados

    char t1[] = "DIA" ;
    char t2[] = "HORAS" ;
    char t3[] = "SALARIO A" ;
    char t4[] = "SALARIO B" ;
    char t5[] = "SALARIO C" ;

    printf("%10s %10s %15s %15s %15s\n\n", t1, t2, t3, t4, t5) ;

    i = 0 ;
    do
    {
        printf("%10d %10d %15.3f %15.3f %15.3f\n",
               i+1, n_horas[i], salario_A[i], salario_B[i], salario_C[i]) ;

        i++ ;
    }
    while(i<numDIAS) ;
}
