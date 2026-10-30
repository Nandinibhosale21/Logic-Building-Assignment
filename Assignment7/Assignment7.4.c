/*Write a program which accept N number from user and print all odd numbers up to N.
Input :18
Output : 1 3 5 7 9 11 13
*/
#include<stdio.h>
void OddDisplay(int iNo)
{  
    int icnt=0;
    for(icnt=1; icnt<=iNo/2; icnt++)
    {
    if(icnt%2!=0)
    {
        printf("%d \t",icnt);
    }
}
}
int main() 
{
int iValue = 0;
printf("Enter number\n");
scanf("%d", &iValue);
OddDisplay(iValue);
return 0;
}