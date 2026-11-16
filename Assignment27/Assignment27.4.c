/*
Write a program which accept string from user and Check whether it contains vowels in it or not  

Input :"Marvellous"
Output:TRUE

Input :"XYZ"
Output :FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str!='\0')
    {
       if(*str=='a'||*str=='e'||*str=='i'||*str=='u'||*str=='o'
        ||*str=='A'||*str=='E'||*str=='I'||*str=='U'||*str=='O')
       {
           return TRUE;
       }
    str++; 
}
           return FALSE;  
}
int main()
{
char arr[20]; 
BOOL bRet = FALSE;

printf("Enter string\n");
scanf("%[^'\n']s", arr);

bRet = ChkVowel(arr);
if(bRet == TRUE)
{
printf("Contains Vowel");
}
else
{
printf ("There are no Vowel");
}
return 0;
}