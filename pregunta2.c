#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int cantNum=10;
    int arrNumeros1[cantNum];
    int arrNumeros2[cantNum];

    int numeros1;
    int numeros2;

    srand(time(NULL));

    for(int i=0;i<cantNum;i++){
        numeros1 = rand() % 51 ;
        numeros2 = rand() % 51 ;

        arrNumeros1[i]=numeros1;
        arrNumeros2[i]=numeros2;
    }
    printf("1er arreglo de numeros:\n");
    for(int i=0;i<cantNum;i++){
        printf("n[%d] = %d \n",i+1,arrNumeros1[i]);
    }
    printf("Tamaño del 1er arreglo: %d \n",cantNum);
    printf("\n");
    printf("2do arreglo de numeros:\n");
    for(int i=0;i<cantNum;i++){
        printf("n[%d] = %d \n",i+11,arrNumeros2[i]);
    }
    printf("Tamaño del 2do arreglo: %d\n",cantNum);

    return 0;
}
