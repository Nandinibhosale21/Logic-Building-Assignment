/*
 accept character from user and Check whether it is capital or not 
(0-9)
Input :7
Output:TRUE

Input :f
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    while(ch!='\0')
    {
       if(ch>='0'&& ch<='9')
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

bRet = ChkDigit(cValue);
if(bRet == TRUE)
{
printf("it is digit");
}
else
{
printf ("it is not digit");
}
return 0;
}