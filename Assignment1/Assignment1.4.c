#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0
bool check(int iNo)
{
if((iNo%5)==0)
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
    int iValue =0;
    bool bret=FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bret = check(iValue);
    if (bret == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
         printf("Not Divisible by 5");
    }
    return 0;
}
