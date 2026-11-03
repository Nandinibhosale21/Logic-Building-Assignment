/*
write a program which accepts number from user and return multiplication of all digits              
input : 2359
output :270

*/

#include<stdio.h>

int MultDigit(int iNo)
{
   int iDigit = 0;
   int iMult = 1;

   while(iNo !=0)
   {
    iDigit = iNo % 10;

    iMult = iMult * iDigit;
    iNo = iNo /10;
   }
   return iMult;
}
int main() 
    {
        int iValue= 0;
        int iRet = 0;
        
    
        printf("Enter number :\n");
        scanf("%d",&iValue);

        iRet =MultDigit(iValue);

        printf("Multipication is : %d",iRet);
        
        return 0;
    }