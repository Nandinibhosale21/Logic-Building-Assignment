/*Write a program to find factorial of given number.
Input :5
Output :120       (5*4*3*2*1)
Input :-5
Output :120       (5*4*3*2*1)
Input :4
Output :24         (4*3*2*1)
*/
#include<stdio.h>
int Factorial(int iNo)
{
    int icnt=0,ifact=0;
    if(iNo<0)
    {
    iNo= -iNo;
    }
    for(icnt=1, ifact=1; icnt<=iNo; icnt++)
    {
        ifact = ifact*icnt;
    }
       return ifact;
}

int main() 
{
int iValue=0, iRet=0;
printf("Enter number\n");
scanf("%d", &iValue);
iRet=Factorial(iValue);
printf("Factorial of number is %d", iRet);
return 0;
}