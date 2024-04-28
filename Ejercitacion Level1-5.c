#define stdio.h
#define p printf
  int main()
{
            int num;
            num =5 * (0x5 && 3);
            if(num!=0)
                p("%d:Distinto de Cero", num);
            else
                p("%d: Cero",num);
         
              return 0;
}