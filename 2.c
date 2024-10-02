#include <stdio.h>

int main ()
{
    char tecla;
    int nota;
    char notas[10];
    
    do 
    { 
        printf("1. Listar notas\n");
        printf("2. Calcular media\n");
        printf("3. Calcular menor\n");
        printf("4. Calcular mayor\n");
        printf("5. Salir\n");
        printf("\nOpcion: ");
        tecla = getchar();
    }
    while (tecla!='1' && tecla!='2' && tecla!='3' && tecla!='4' && tecla!='5');

    switch (tecla)
    {
        case '1' : printf("Listar \n");
                   for (int i = 0 ; i < 10 ; i++) {
                       printf("Ingrese la nota del alumno %d: ", i + 1);
                       scanf("%d", &nota);
                       notas[i] = nota;
                   }
                   printf("\nLas notas de los alumnos son: \n");
                   for (int j = 0 ; j < 10 ; j++) {
                       
                       printf("Alumno %d -> Nota: %d\n", j+1 , notas[j]);
                       
                   }            
    }

return 0;
}


