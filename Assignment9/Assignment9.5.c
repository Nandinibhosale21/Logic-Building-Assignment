/*Write a program which returns difference between Even factorial and odd factorial of given number.
Input :5
Output :-7     (8-15)
Input :-5
Output :-7     (8-15)
Input :10
Output:2895  (3840-945)
*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int icnt=0;
    int iEvenfact=1;
    int iOddfact=1;
    if(iNo<0)
    {
    iNo= -iNo;
    }
    for(icnt=2;icnt<=iNo; icnt+=2)
    {
        iEvenfact= iEvenfact*icnt;
    }
    for(icnt=1;icnt<=iNo; icnt+=2)
    {
         iOddfact= iOddfact*icnt;
    }
    return iEvenfact-iOddfact;
}

int main() 
{
int iValue=0, iRet=0;
printf("Enter number\n");
scanf("%d", &iValue);
iRet=FactorialDiff(iValue);
printf("Factorial of number is %d", iRet);
return 0;
}