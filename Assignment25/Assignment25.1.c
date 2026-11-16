/*
 accept character from user and Check whether it is alphabet or not 
(A-Z or a-z)
Input :f
Output:TRUE

Input :&
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    while(ch!='\0')
    {
       if(ch>='A'&& ch<='Z' || ch>='a'&& ch<='z')
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

bRet = ChkAlpha(cValue);
if(bRet == TRUE)
{
printf("it is Character");
}
else
{
printf ("it is not Character");
}
return 0;
}