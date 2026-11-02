/*Write a program which accept number from user and return difference between summation of all its factors 
and non factors..
Input : 12
Output:-34   (16-50)

Input :10
Output :-29    (8-37)

*/
#include<stdio.h>
int FactDiff(int iNo)
{
   int icnt=0;
   int iSumFact=0;
   int iSumNonFact=0;

   for(icnt=1; icnt<iNo; icnt++)
   {
     if(iNo%icnt==0)
     {
        iSumFact = iSumFact + icnt;
     }
     else 
     {
        iSumNonFact = iSumNonFact + icnt;
     }
    }
    return iSumFact-iSumNonFact;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number\n");
scanf("%d", &iValue);

iRet=FactDiff(iValue);
printf("%d",iRet);

return 0;
}