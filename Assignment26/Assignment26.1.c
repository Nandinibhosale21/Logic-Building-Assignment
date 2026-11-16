/*
 Write a program which displays ASCII table. Table contains symbol, Decimal, 
 Hexadecimal and Octal representation of every member from 0 to 255.
*/
#include<stdio.h>

void DisplayASCII()
{
   int icnt=0;
   
   printf("Decimal\tHexadecimal\tOctal\tSymbol");
   for(icnt=0;icnt<=255;icnt++)
   {
         printf("%d\t %X\t %o\t %c\n",icnt,icnt,icnt,(char)icnt);
    }
   }

int main()
{
DisplayASCII();
return 0;
}