#include<stdio.h>

int validarNumPertenece(int num){
    if(num>0 && num<255){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("Ingrese un numero <0,255> = ");
    scanf("%d",&num);
    int valido=validarNumPertenece(num);
    if(valido==1){
        printf("Es un numero valido");
    }else{
        printf("No es un numero valido");
    }

    return 0;
}
