/*
Description : write a program which accepts two number  and check weather that number are equal of not 
 input : 10 10
 output :equal
*/

 
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main() 
    {
       int iValue1  = 0; 
       int iValue2 = 0;
       BOOL bRet = FALSE;

       printf("Enter first number:\n");
       scanf("%d",&iValue1);

       printf("Enter second number:\n");
       scanf("%d",&iValue2);

       bRet= ChkEqual(iValue1,iValue2);

       if(bRet == TRUE)
       {
        printf("Equal\n");
       }
       else
       {
         printf("not equal");
       }
                
        return 0;
    }