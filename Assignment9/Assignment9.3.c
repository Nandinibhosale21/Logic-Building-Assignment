/*Write a program to find even factorial of given number.
Input :5
Output :8       (4*2)
Input :-5
Output :8      (4*2)
Input :10
Output :3840   (10*8*6*4*2)
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int icnt=0,ifact=0;
    if(iNo<0)
    {
    iNo= -iNo;
    }
    for(icnt=1, ifact=1; icnt<=iNo; icnt++)
    {
        if (icnt%2==0)
        {
           ifact = ifact*icnt;
        }
    }
       return ifact;
}

int main() 
{
int iValue=0, iRet=0;
printf("Enter number\n");
scanf("%d", &iValue);
iRet=EvenFactorial(iValue);
printf("Factorial of number is %d", iRet);
return 0;
}