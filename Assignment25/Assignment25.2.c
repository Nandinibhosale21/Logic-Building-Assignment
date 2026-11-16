/*
 accept character from user and Check whether it is capital or not 
(A-Z )
Input :F
Output:TRUE

Input :f
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    while(ch!='\0')
    {
       if(ch>='A'&& ch<='Z')
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

bRet = ChkCapital(cValue);
if(bRet == TRUE)
{
printf("it is Capital Character");
}
else
{
printf ("it is not Capital Character");
}
return 0;
}