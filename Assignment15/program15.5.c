/*
write a program which accepts number from user and return diffrence betwwen summation of even digits and 
sumation of odd digits..
              
input : 2359
 output :-15 ->(2-17)
*/

 
#include<stdio.h>

int Diffrence(int iNo)
{
   int iDigit = 0;
   int iEven = 0;
   int iOdd = 0;

   while(iNo !=0)
   {
    iDigit = iNo % 10;

    if(iNo%2 == 0)
    {
        iEven = iEven + iDigit;
    }
    else
    {
        iOdd = iOdd + iDigit;

    }
    iNo = iNo /10;
   }
   return (iEven - iOdd);
}
int main() 
    {
        int iValue= 0;
        int iRet = 0;
        
    
        printf("Enter number :\n");
        scanf("%d",&iValue);

        iRet =Diffrence(iValue);

        printf("Diffrence is : %d",iRet);
        
        return 0;
    }