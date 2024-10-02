#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float mayor(float x, float y)
{
    if(x>y)  return(x) ;
      else  return(y) ;
}

float menor(float x, float y)
{
    if(x<y)  return(x) ;
      else  return(y) ;
}

int main()
{
    // Definicion de variables

    int numDIAS = 0 ;
    float minA = 60.0, maxA = 0.0, promA = 0.0 ;
    float minB = 74.0, maxB = 0.0, promB = 0.0 ;
    float minC = 49.0, maxC = 0.0, promC = 0.0 ;

    // Ingresar tamanho de la muestra

    system("cls") ;
    do
    {
        printf("* Digitar cantidad de dias: ") ;
        scanf("%d", &numDIAS) ;
    }
    while(numDIAS<0||numDIAS>60) ;

    // Declaracion de arreglos

    int n_horas[numDIAS] ;
    float salario_A[numDIAS], salario_B[numDIAS], salario_C[numDIAS] ;

    // Semilla random

    srand(time(0)) ;

    // Generacion de datos

    for(int i=0;i<numDIAS;i++)
    {
        n_horas[i] = 3 + rand() % 6 ;
        salario_A[i] = 20 + 5*n_horas[i] ;
        salario_B[i] = 18 + 7*n_horas[i] ;
        salario_C[i] = 25 + 3*n_horas[i] ;
    }

    // Procesamiento de datos

    for(int i=0;i<numDIAS;i++)
    {
        minA = menor(salario_A[i],minA) ;
        maxA = mayor(salario_A[i],maxA) ;
        promA += salario_A[i]/(float)numDIAS ;

        minB = menor(salario_B[i],minB) ;
        maxB = mayor(salario_B[i],maxB) ;
        promB += salario_B[i]/(float)numDIAS ;

        minC = menor(salario_C[i],minC) ;
        maxC = mayor(salario_C[i],maxC) ;
        promC += salario_C[i]/(float)numDIAS ;
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
    printf("%10s %10s %15.3f %15.3f %15.3f\n", " ", t6, maxA, maxB, maxC) ;
    printf("%10s %10s %15.3f %15.3f %15.3f\n", " ", t7, minA, minB, minB) ;
    printf("%10s %10s %15.3f %15.3f %15.3f\n", " ", t8, promA, promB, promC) ;
}
