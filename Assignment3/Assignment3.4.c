/*Accept one character from user and convert case of that character.
Input :a   Output : A
Input: D  Output : d
*/
#include<stdio.h>
 char DisplayConvert (char CValue)
 {
if((CValue>='a')&&(CValue<='z'))
{
    printf("%c",CValue-32);
}
else if((CValue>='A')&&(CValue<='Z'))
{
    printf("%c", CValue+32);
}
}
int main()
{
char CValue = '\0';
printf("Enter character\n");
scanf ("%c",&CValue);
DisplayConvert (CValue);
return 0;
}