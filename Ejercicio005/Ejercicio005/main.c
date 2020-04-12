#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float sumaNum;
    float max;
    float min;
    int contador = 0;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%f", &num);
    sumaNum = sumaNum + num;
    max = num;
    min = num;
    contador ++;

    for (contador = 1; contador <5; contador ++){
        printf("Ingrese un numero: ");
        scanf("%f", &num);
        sumaNum = sumaNum + num;

        if (max < num){
            max = num;
        }
        if (min > num) {
            min = num;
        }
    }
    promedio = (float) sumaNum / contador;

    printf("\n\nEl promedio es: %f\n\n", promedio);
    printf("El maximo es: %f\n\n", max);
    printf("El minimo es: %f\n\n", min);

    return 0;
}
