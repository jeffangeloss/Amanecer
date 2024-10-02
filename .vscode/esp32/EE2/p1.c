#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N (2+0+2+2+5+0+1+9)/8

float prom(float (a))
{
    float z;
    z+=(a)/3;
    return (z);
}

char temp(int (b))
{
    if (b<17)
        {
            return ("FRIO");
        }
        else
        {
            return("CALOR");
        }
}

int main()
{
    // Declaracion de variables
    int temperatura;
    float promedio;

    srand(time(0));

    char t1[]="NOTAS";
    char t2[]="PROMEDIO";

    printf("%10s %10s\n", " ", t1);

    for(int i=0; i<3; i++)
    {
        temperatura=5+rand()% 23;
        promedio=prom(temperatura);

        printf("%10s %10d\n", " ", temperatura);
    }

    printf("%10s", t2);

    printf("%10.3f", promedio);

}
