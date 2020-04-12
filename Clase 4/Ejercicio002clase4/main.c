#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numeroOculto;
    int numeroIngresado;
    int intentos = 1;
    char teclaIngresada;
    int jugar;

    teclaIngresada = 's';
    while (teclaIngresada == 's')
    {
        numeroOculto = getNumeroAleatorio(1,100,1);
        //printf("%d\n", numeroOculto );
        jugar = 1;
        while(jugar ==1)
        {
            numeroIngresado = getint("Ingrese un numero (0-100)\n");
            if (numeroIngresado < 0)
            {
                printf("Lamentamos que te vayas. Hiciste %d intentos\n ", intentos);
                jugar = 0;
                intentos ++;
            }
            else if (numeroIngresado == numeroOculto)
            {
                printf("Felicitaciones!!! Ganaste un 0 KM!!! Lo lograste en %d intentos\n", intentos);
                jugar = 0;
                intentos ++;
            }
            else if (numeroIngresado > numeroOculto)
            {
                printf("El numero que ingresaste es mas grande\n");
                intentos ++;
            }
            else if (numeroIngresado < numeroOculto)
            {
                printf("El numero que ingresaste es mas chico\n");
                intentos ++;
            }
        }
        teclaIngresada = getChar("¿Desea jugar nuevamente? (s/n)\n");
    }

    return 0;
}
