/*
Write a program which accept string from user and accept one character.return index of last occurrenceof that
 character
Input :"Marvellous Multi OS"
        M
Output:11

Input :"Marvellous Multi OS"
        W
Output :-1
*/
#include<stdio.h>
int FirstChar(char *str, char ch)
{ 
  int iCounter=0;
  int iLast=-1;
    while(*str!='\0')
    {
       if(*str==ch)
       {
          iLast=iCounter;
       }
      iCounter++;
      str++;
} 
return iLast;  
}

int main()
{
char arr[20]; 
char cValue;
int iRet =0;

printf("Enter string\n");
scanf("%[^'\n']s", arr);
getchar();
printf("Enter the character:");
scanf("%c", &cValue);

iRet = FirstChar(arr, cValue);

printf("Character locatio is %d",iRet);

return 0;
}