/*
 accept character from user and Check whether it is small or not 
(a-z)
Input :f
Output:TRUE

Input :F
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    while(ch!='\0')
    {
       if(ch>='a'&& ch<='z')
       {
           return TRUE;
       }
       else
       { 
           return FALSE;
        }
    }
}

int main()
{
char cValue='\0';
BOOL bRet = FALSE;

printf("Enter the character:");
scanf("%c", &cValue);

bRet = ChkSmall(cValue);
if(bRet == TRUE)
{
printf("it is Small Character");
}
else
{
printf ("it is not Small Character");
}
return 0;
}