/*
Accept Character from user and check whether it is special symbol or not (!, @, #, $,%, ^, &, *).
Input:#
Output:TRUE

Input :j
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    while(ch!='\0')
    {
       if(ch=='!' || ch=='@' || ch=='#' || ch=='$'||ch=='%' || ch=='^'||ch=='&' || ch=='*')
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

bRet = ChkSpecial(cValue);

if(bRet == TRUE)
{
printf(" It is Special Character");
}
else
{
printf ("it is not Special Character ");
}
return 0;
}