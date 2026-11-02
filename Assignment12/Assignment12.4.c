/*Write a program which accept number from user and return summation of all its non factors.
Input : 12
Output:50

Input :13
Output :37

*/
#include<stdio.h>
int SumNonFact(int iNo)
{
   int icnt=0;
   int isum=0;
   for(icnt=1; icnt<=iNo; icnt++)
   {
      if(iNo % icnt!=0)
      {
          isum = isum+icnt;
      }
   }
    return isum;
}
int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number\n");
scanf("%d", &iValue);

iRet=SumNonFact(iValue);
printf("%d",iRet);

return 0;
}