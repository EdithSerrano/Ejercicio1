#include <stdio.h>
#define p printf
  int main()
{
            int numero;
            //Solicitar al usuario que ingrese un numero
            p("\nIngresar un numero ");
            scanf("%d",&numero);
            
            //Verificar si el numero es multiplo de 3
             if( numero%3==0) {
               printf("%d es múltiplo de 3.\n", numero);
             }
             9else {
               printf("%d no es múltiplo de 3.\n", numero);
             } 
            
              return 0;
}