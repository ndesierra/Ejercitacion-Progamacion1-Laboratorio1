#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje mostrado
 * \return El numero ingresado por el usuario
 *
 */

 float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje mostrado
 * \return El numero ingresado por el usuario
 *
 */

 int getint(char mensaje[])
 {
     int auxiliar;
     printf("%s", mensaje);
     scanf("%d", &auxiliar);
     return auxiliar;
 }

 /** \brief Solicito un caracter al usuario y devuelve el resultado
  * \param mensaje Es el mensaje a ser mostrado
  * \return El caracter ingresado por el usuario
  *
  */
  char getChar(char mensaje[])
  {
      char auxiliar;
      printf("%s", mensaje);
      fflush(stdin);

      scanf("%c", &auxiliar);
      return auxiliar;
  }

  /** \brief Genera un numero aleatorio
   *
   * \param desde Numero Aleatorio minimo
   * \param hasta Numero aleatorio maximo
   * \param iniciar Indica si se trata del primer numero solicitado 1 indica que si
   * \return
   *
   */

   char getNumeroAleatorio(int desde , int hasta, int iniciar)
   {
      if(iniciar)
        srand(time(NULL));
      return desde + (rand() % (hasta + 1 - desde)) ;
    }
