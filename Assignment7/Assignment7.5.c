/*Write a program which accept N from user and print first 5 multiple of N 
Input :4
Output : 4 8 12 16 20
*/
#include<stdio.h>
void Display(int iNo)
{
    int icnt=0;
    for(icnt=1; icnt<=5; icnt++)
    { 
        printf("%d\t",icnt*iNo);
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