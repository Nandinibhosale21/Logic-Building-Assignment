/*Accept on character from user and check whether that character is vowe (a, e, i,o, u) or not
Input: E   Output : TRUE
 input: D  Output: FALSE
 */
#include<stdio.h>

typedef int bool;
# define TRUE 1
# define FALSE 0
bool chkVowel(char CValue)
{
if((CValue=='a')||(CValue=='e')||(CValue=='i')||(CValue=='o')||(CValue=='u')||
   (CValue=='A')||(CValue=='E')||(CValue=='I')||(CValue=='O')||(CValue=='U'))
{
    return TRUE;
}
else
{
    return FALSE;
}
}
int main ()
{
char cValue = '\0';
bool bRet = FALSE;

printf("Enter character\n");
scanf ("%c",&cValue);
bRet = chkVowel(cValue);
if(bRet == TRUE)
{
   printf("it is vowel");
}
else
{
printf("It is not Vowel");
}
return 0;
}