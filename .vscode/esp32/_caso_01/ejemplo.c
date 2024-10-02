#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct { char nombre[20]; int edad; } Persona;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5,'\n'};
    int arr3[5] = {1, 2, 3, 4, 5};
    int arr4[6] = {1, 2, 3, 4, 5};
//    int arr5[5] = {1; 2; 3; 4; 5};
    printf("%d\n", sizeof(arr1)) ;
    printf("%d\n", sizeof(arr2)) ;
    printf("%d\n", sizeof(arr3)) ;
    printf("%d\n", sizeof(arr4)) ;
}
