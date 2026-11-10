/*
Accept number of from user and display below pattern.
Input :iRow = 5  
Output: A B C D E
Program Layout :
*/
#include<stdio.h>
void Pattern(int ino)
{
    int i=0;
    char ch='A';
    for(i=1;i<=ino; i++)
    {
         printf("%c\t",ch);
         ch++;
    }
       
    printf("\n");
    }

int main()
{
int iValue1=0;

printf("Enter number\n");
scanf("%d", &iValue1);

Pattern(iValue1);
return 0;
}