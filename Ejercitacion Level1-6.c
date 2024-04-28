#define stdio.h
#define p printf
  int main()
{
            int num;
            num = (0x5 && 0xA7) * (0 || 0x0);
            if(num!=0)
                p("%d:Distinto de Cero", num);
            else
                p("%d: Cero",num);
         
              return 0;
}