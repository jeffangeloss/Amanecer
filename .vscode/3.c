#include <stdio.h>

int sumar (int* a, int* b, int* resultado)
{
    *resultado = *a + *b ; 
}

int restar (int* a, int* b, int* resultado)
{
    *resultado = *a - *b ; 
}


int multiplicar (int* a, int* b, int* resultado)
{
    *resultado = (*a) * (*b) ; 
}


int dividir (int* a, int* b, float* resultado)
{
    *resultado = (*a) / (*b) ; 
}


int main ()
{
    int num1, num2, resultado; 
    float resultadoDivision;
    char tecla; 
    

    do
    {
        printf("----CALCULADORA----\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        
        printf("\nOpcion: ");
        
        tecla = getchar();
    }
    while (tecla!='1' && tecla!='2' && tecla!='3' && tecla!='4');
    
    
    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);
    
    
    int *n1 = &num1;
    int *n2 = &num2;
    
    switch (tecla)
    {
        case '1': 
        
        sumar(n1, n2, &resultado);
        printf("Suma: %d\n", resultado);
        break;
        
        
        case '2': 
        
        restar(n1, n2, &resultado);
        printf("Resta: %d\n", resultado);
        break;
        
        case '3': 
        
        multiplicar(n1, n2, &resultado);
        printf("Producto: %d\n", resultado);
        break;
        
        case '4': 
        
        dividir(n1, n2, &resultadoDivision);
        printf("Division: %2f\n", resultadoDivision);
        break;
    
    }
return 0;
}

