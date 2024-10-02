#include <stdio.h>
#include <stdlib.h>

#define N 2*3.1416

float area(int (x), int (y))
{
    float z;
    z=N*x*y;
    return(z);
}

int main()
{
    int radio, altura;
    float esfera;

    {
        printf("Ingresar radio: "); scanf("%d", &radio);
        printf("Ingresar altura: "); scanf("%d", &altura);
    }


    esfera=area(radio, altura);
    printf("El resultado es: %.2f", esfera);

}
