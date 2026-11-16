/*Write a program which accept string from user and count number of small characters.
Input :"Marvellous Multi OS"
Output :4
*/
#include<stdio.h>
int CountSmall(char *str)
{
int iCnt = 0;
if(*str<=0)
{
    *str= -*str;
}
while(*str != '\0')
{
      if(*str>='a' && *str<='z')
      {
        iCnt++;
      }
      str++;
    }
return iCnt;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string:\n");
scanf("%[^'\n']s",arr);

iRet = CountSmall(arr);

printf("%d", iRet);

return 0;
}