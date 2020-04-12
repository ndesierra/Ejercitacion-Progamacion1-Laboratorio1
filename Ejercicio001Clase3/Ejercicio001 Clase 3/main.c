#include <stdio.h>
#include <stdlib.h>


float pedirNumero();
float areaCirculo(float radio);


int main()
{
    float radiodelCirculo;
    float area;

    radiodelCirculo = pedirNumero();
    area = areaCirculo(radiodelCirculo);

    printf("El area del circulo es %.2f\n",area);
    return 0;
}

/**
 * \brief Solicita un número y lo retorna
 * \return Número ingresado por el usuario
 *
 */

float pedirNumero()
{
    float pedirunNum;
    printf("Ingrese el numero del usuario: ");
    scanf("%f", &pedirunNum);
    return pedirunNum;
}

/**
 * \brief Recibe el radio y calcula el área del círculo
 * \param Radio correspondiente al radio del círculo
 * \return El área del círculo
 *
 */
float areaCirculo (float radio)
{
    float calculo;
    calculo = 3.14 * radio*radio;
    return calculo;
}
