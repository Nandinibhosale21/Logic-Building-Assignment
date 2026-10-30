/*1. Write a program which accept number from user and display below pattern..
Input : 5
Output : * * * * * # # # # #

Input : 6
Output : * * * * * * # # # # # #

Input : -5
Output : * * * * * # # # # #

Input : 2
Output : * * # #
*/

#include<stdio.h>
void Display(int iNo)
{
int icnt=0;
if(iNo<0)
{
   iNo= -iNo;
}
for(icnt=1; icnt<=iNo; icnt++)
{
   printf(("*\t"));
}
for(icnt=1; icnt<=iNo; icnt++)
   {
       printf(("#\t"));
   }

}


int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d", &iValue);
Display(iValue);
return 0;
}