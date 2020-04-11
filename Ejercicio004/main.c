#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int contadorNum = 0;
    int contadorNeg = 0;
    int contadorPos = 0;

    do
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &num);

        contadorNum++;
        if (num<0){
            contadorNeg++;
        }
        else{
            contadorPos++;
        }

    }while (contadorNum<10);

    printf("La cantidad de numeros negativos es: %d\n\n", contadorNeg);
    printf("La cantidad de numeros positivos es: %d\n\n", contadorPos);

    return 0;
}
