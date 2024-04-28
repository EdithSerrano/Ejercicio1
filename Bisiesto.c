#include <stdio.h>
#define p printf
  int main()
{
            int numero;
            //Solicitar al usuario que ingrese un numero
            p("Ingresar un año: ");
            scanf("%d",&numero);
            
            //Verificar si el numero es bisiesto
             if( numero%4==0) {
               p("%d es año bisiesto.\n", numero);
             }
             else {
               p("%d no es año bisiesto.\n", numero);
             } 
            
              return 0;
}