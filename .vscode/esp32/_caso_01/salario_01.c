#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numDIAS 20

int main()
{
    // Definicion de variables
    int n_horas ;
    float salario_A, salario_B, salario_C ;

    // Semilla random
    srand(time(0)) ;

    //Generacion de muestra y reporte de resultados
    char t1[] = "DIA" ;
    char t2[] = "HORAS" ;
    char t3[] = "SALARIO A" ;
    char t4[] = "SALARIO B" ;
    char t5[] = "SALARIO C" ;

    printf("%10s %10s %15s %15s %15s\n\n", t1, t2, t3, t4, t5) ;

    for(int i=1;i<=numDIAS;i++)
    {
        n_horas = 3 + rand() % 6 ;
        salario_A = 20 + 5*n_horas ;
        salario_B = 18 + 7*n_horas ;
        salario_C = 25 + 3*n_horas ;

        printf("%10d %10d %15.3f %15.3f %15.3f\n",
               i, n_horas, salario_A, salario_B, salario_C) ;
    }
}
