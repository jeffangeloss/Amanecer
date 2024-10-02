Numeros aletorios:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorios(int num){
    if(num<=20){
        int arrNumeros[num];
        int numeros;
        srand(time(NULL));
        for(int i=0;i<num;i++){
            numeros = rand() % 101 ;
            arrNumeros[i]=numeros;
        }
        for(int i=0;i<num;i++){
            printf("%d\n",arrNumeros[i]);
        }
    }
}

int main(){
    int num,MAX;
    printf("Ingrese el valor de los numeros aleatorios= ");
    scanf("%d",&MAX);
    aleatorios(MAX);

    return 0;
}
```

Longitud de cadena:

```c
#include<stdio.h>
#include<string.h>

int largo_cadena(char cadena[]){

    int largo=0;
    while (cadena[largo]!='\0') largo++;
    return largo;
}

int main(){
    char mensaje[80];
    int len;

    printf("Ingrese un mensaje: ");
    fgets(mensaje,60,stdin);
    mensaje[strlen(mensaje)-1]='\0';
    len=largo_cadena(mensaje);
    printf("La longitud del mensaje es %d\n",len);
}
```

Menú de notas:

```c
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    int num, arrNumeros[10];
    int sumaNotas=0;
    char tecla;

    for(int i=0;i<10;i++){
        printf("Ingrese la nota del alumno #%d: ",(i+1));
        scanf("%d",&num);
        arrNumeros[i]=num;
    }

    do{
        system("cls");
        printf("1. Listar notas\n");
        printf("2. Media\n");
        printf("3. Menor\n");
        printf("4. Mayor\n");
        printf("5. Salir\n");
        printf("\nOpcion: ");
        tecla=getchar();
    }
    while(tecla!='1'&&tecla!='2'&&tecla!='3'&&tecla!='4'&&tecla!='5');

    switch(tecla){
        case '1':
            printf("Listar notas\n");
            for(int i=0;i<10;i++){
                printf("Nota #%d = %d\n",(i+1),arrNumeros[i]);
                sumaNotas+=arrNumeros[i];
            }
            printf("La suma de las notas es %d",sumaNotas);
            break;
        case '2':
            printf("Media\n");
            printf("Estamos trabajando...");
        case '3':
            printf("Operación: Menor\n");
            printf("Estamos trabajando...");
        case '4':
            printf("Operación: Mayor\n");
            printf("Estamos trabajando..");
    }
    return 0;
}
```

Pues, otra forma:

```c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int num, arrNumeros[10];
    int sumaNotas = 0;
    char tecla;

    // Ingresar notas
    for (int i = 0; i < 10; i++) {
        printf("Ingrese la nota del alumno #%d: ", (i + 1));
        scanf("%d", &num);
        arrNumeros[i] = num;
    }

    do {
        // Limpiar pantalla solo en Windows (si es necesario)
        // system("cls");

        printf("1. Listar notas\n");
        printf("2. Media\n");
        printf("3. Menor\n");
        printf("4. Mayor\n");
        printf("5. Salir\n");
        printf("\nOpcion: ");

        // Limpiar buffer y leer una tecla
        while (getchar() != '\n'); 
        tecla = getchar();

        switch (tecla) {
            case '1':
                printf("Listar notas\n");
                for (int i = 0; i < 10; i++) {
                    printf("Nota #%d = %d\n", (i + 1), arrNumeros[i]);
                    sumaNotas += arrNumeros[i];
                }
                printf("La suma de las notas es %d\n", sumaNotas);
                sumaNotas = 0; // Reiniciar sumaNotas para evitar acumulación errónea
                break;

            case '2': {
                printf("Media\n");
                for (int i = 0; i < 10; i++) {
                    sumaNotas += arrNumeros[i];
                }
                float media = sumaNotas / 10.0;
                printf("La media es: %.2f\n", media);
                sumaNotas = 0;
                break;
            }

            case '3': {
                printf("Operación: Menor\n");
                int menor = arrNumeros[0];
                for (int i = 1; i < 10; i++) {
                    if (arrNumeros[i] < menor) {
                        menor = arrNumeros[i];
                    }
                }
                printf("La nota menor es: %d\n", menor);
                break;
            }

            case '4': {
                printf("Operación: Mayor\n");
                int mayor = arrNumeros[0];
                for (int i = 1; i < 10; i++) {
                    if (arrNumeros[i] > mayor) {
                        mayor = arrNumeros[i];
                    }
                }
                printf("La nota mayor es: %d\n", mayor);
                break;
            }

            case '5':
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Ha ingresado una opcion invalida!\n");
                break;
        }

    } while (tecla != '5'); // Sale cuando se elige la opción 5

    return 0;
}

```

Menu de operaciones

Fijaaaaa:

Ustedes prefieran, si o no.

Si es sumar, llama a la función suma, si es restar, llama a la función resta, ¿no? Profe, ¿y pudimos mezclar todo? ¡Claro, sí o no! Pueden usar switch case, pero llaman funciones, ¿no? Si o no, va rápido esto.

Acá está la función SUMA. (CALCULADORA CON PUNTEROS)

Luego, la declaran, acá, acá está la función resta. ¿Está bien? Acá empieza el programa principal.

¿Está bien? Un menú más chiquito.

Imagínense, y juntan todos, y ya lo tienen todo.

¿Tendrían todos los elementos? Ya ustedes saben, ¿no? Defino las variables, y nada más que... le digo que ahora lo voy a hacer por punteros, ¿no? ¿Cómo es? Definición, asociación, utilización. Y hay un ejemplo bien bacán, que vimos yo, les dije, miren, miren que chévere como lo hacen, ¿no?

muy minimalista, que no se veía la asociación, pero cuando le decían Ampersand, ahí estaban asociándonos. Voy a buscar ahorita ese programa para que lo vean, me parece que está en esta misma guía, creo que está en esta misma guía.

![1000188858.jpg](https://prod-files-secure.s3.us-west-2.amazonaws.com/42a91919-f95f-4375-b0e4-0dc891588a28/f8b83d42-d8ba-44b1-a924-5ac5e25ede0d/1000188858.jpg)

No voy a poner un super programa y les he dado las ideas de por donde viene. Ahora el profesor lo va a escribir, ¿no? Solo voy a escribir el enunciado. Obviamente lo voy a resolver primero, ¿no? Pero los otros los he resuelto con ustedes. Con ustedes, ¿no?

Ustedes me han ayudado, ¿no?

¿Está bien?

Este de acá, ¿no?, me pidió... ¿Por qué no pasó? Si ahí está.

¿Qué dice? A mucho. Así lo había visto, ¿no? 1.405 L. Jejeje. ¿Nos volamos o no? ¿Nosotros qué hicimos?

Todavía, ¿no? Qué mal nos vamos a volar.

Ah, por eso Anhelo, no me dejas, miren, dice que estoy arriba de los...

Y ahorita se quiere el foro.

¡Ahora sí!

¿Listo? Entonces, por favor, miren este último que les estoy señalando, ¿no? Aquí está la suma. Pero estoy intentando, ¿no? Profe, no habíamos usado punteros. ¿Cómo sería el de punteros? Vía un pequeño menú sumar, restar, salir haga esas operaciones sumar, restar, haciendo uso de punteros y funciona.