#include <stdio.h>
#define p printf
  int main(void)
{

            unsigned short int base,altura,area, perimetro;
            base = 8;
            altura =5;
            area = base * altura; //calculo el area del rectangulo
            perimetro = base*2 + altura*2; // calculo el perímetro

            p("\nEl área del rectangulo es: %d\n", area);
            p("\nEl perímetro del rectangulo es: %d\n", perimetro);

            return 0;

}
