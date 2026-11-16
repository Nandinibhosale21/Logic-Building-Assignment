/*write program which accept string from user and count number of white spaces
input= "Marvellous"
output=0

input="Demo java"
output= 1
*/
#include<stdio.h>
int CountWhite(char *str)
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==' ' )
        {
         iCount++;
        }
       str++;
    }
    return iCount;
}      
int main()
{
     char arr[20];
     int iret=0;
     printf("Enter string\n");
     scanf("%[^'\n']s",arr);

    iret=CountWhite(arr); 
    printf("%d",iret);
    return 0;
}