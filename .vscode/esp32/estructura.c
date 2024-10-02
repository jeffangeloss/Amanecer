#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define puntos 20

struct p
{
    int a, b;
};

int main()
{
    struct p plano[puntos];
    srand(time(0));

    for(int i=0; i<puntos; i++)
    {
        plano[i].a=10+rand()% 91;
        plano[i].b=10+rand()% 91;
    }

    char t1[]="X";
    char t2[]="Y";

    printf("%5s %5s\n", t1, t2);

    for(int i=0; i<puntos; i++)
    {
        printf("%5d %5d\n", plano[i].a, plano[i].b);
    }
}
