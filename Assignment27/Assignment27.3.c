/*Write a program which accept string from user and return difference between frequency
 of small characters and frequency of capital characters.
Input :"Marvellous Multi OS"
Output :6 (8-2)
*/
#include<stdio.h>
int Difference(char *str)
{
int iSmallCount = 0;
int iCapitalCount=0;
if(*str<=0)
{
    *str= -*str;
}
while(*str!= '\0')
{
      if(*str>='a' && *str<='z' )
      {
        iSmallCount++;
      }
      else if(*str>='A' && *str<='Z')
      {
        iCapitalCount++;
      }
      str++;
    }
return (iSmallCount-iCapitalCount);
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string:\n");
scanf("%[^'\n']s",arr);

iRet = Difference(arr);

printf("%d", iRet);

return 0;

}