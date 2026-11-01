/*Write a program which accept range from user and return addition of all even numbers in between that range.
(only positive)
Input :23 30
Output :108
Input :10 18
Output :70
Input :-10 2
Output：invalid 
Input :90 18
Output : Invalid range
*/
#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    int icnt=0;
    int isum=0;
    for(icnt=iStart; icnt<=iEnd; icnt++)
    {
      if(icnt%2==0)
      {
         isum = isum + icnt;  
      } 
    }
    return isum;

    if(iStart>iEnd)
      {
        printf("Invaild range");
        return 0;
      }
}


int main()
{
int iValue1 = 0, iValue2 = 0, iret=0;
printf("Enter starting point\n");
scanf("%d",&iValue1);

printf("Enter ending point\n");
scanf("%d",&iValue2);

iret=RangeSumEven(iValue1, iValue2); 
printf("Addition is: %d",iret);

return 0;
}