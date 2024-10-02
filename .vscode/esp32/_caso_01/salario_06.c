#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numDIAS 20

int main()
{
    // Definicion de variables

    int n_horas[numDIAS] ;
    float salario_A[numDIAS], salario_B[numDIAS], salario_C[numDIAS] ;
    float minA = 60.0, maxA = 0.0, promA = 0.0 ;

    // Semilla random

    srand(time(0)) ;

    // Procesamiento de datos

    for(int i=0;i<numDIAS;i++)
    {
        n_horas[i] = 3 + rand() % 6 ;
        salario_A[i] = 20 + 5*n_horas[i] ;
        salario_B[i] = 18 + 7*n_horas[i] ;
        salario_C[i] = 25 + 3*n_horas[i] ;

        minA = salario_A[i]<minA?salario_A[i]:minA ;
        maxA = salario_A[i]>maxA?salario_A[i]:maxA ;
        promA += salario_A[i]/(float)numDIAS ;
    }

    // Reporte de resultados

    char t1[] = "DIA" ;
    char t2[] = "HORAS" ;
    char t3[] = "SALARIO A" ;
    char t4[] = "SALARIO B" ;
    char t5[] = "SALARIO C" ;

    printf("%10s %10s %15s %15s %15s\n\n", t1, t2, t3, t4, t5) ;

    for(int i=0;i<numDIAS;i++)
    {
        printf("%10d %10d %15.3f %15.3f %15.3f\n",
               i+1, n_horas[i], salario_A[i], salario_B[i], salario_C[i]) ;
    }

    char t6[] = "MAXIMO" ;
    char t7[] = "MINIMO" ;
    char t8[] = "PROMEDIO" ;

    printf("\n") ;
    printf("%10s %10s %15.3f\n", " ", t6, maxA) ;
    printf("%10s %10s %15.3f\n", " ", t7, minA) ;
    printf("%10s %10s %15.3f\n", " ", t8, promA) ;
}
