#include <studio.sh>
#define p printf
  int main(void)
{

            int lado, area, perimetro;
            lado = 5;
            area = lado * lado; //calculo el area del cuadrado
            perimetro = lado * 4; // calculo el perímetro

            p("/nEl área del cuadrado es: %d/n", area);
            p("/nEl perímetro del cuadrado es: %d/n", perimetro);

            return0;

}
    
