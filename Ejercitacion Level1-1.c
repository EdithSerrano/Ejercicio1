#define p printf
  int main()
{
            int num;
            num =(25 && 3) + 2;
            if(num)
                p("%d:Distinto de Cero", num);
            else
                p("%d: Cero",num);
         
              return 0;
}