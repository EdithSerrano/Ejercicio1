#define stdio.h
#define p printf
  int main()
{
            int num;
            num = ((0 || 5) + (3.14159 && 2.14)) + (3 * (7.6 || 0)) && ((25 && 3) + 2);
            if(num!=0)
                p("%d:Distinto de Cero", num);
            else
                p("%d: Cero",num);
         
              return 0;
}