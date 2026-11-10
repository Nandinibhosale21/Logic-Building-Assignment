/*
Accept number of from user and display below pattern.
Input :ino = 8
Output: 2 4 6 8 10 12 14 16
Program Layout :
*/
#include<stdio.h>
void Pattern(int ino)
{
    int i=0;
    {
    for(i=1;i<=ino;i++)
    {
        printf("%d\t",i*2);
    }
       
    printf("\n");
    }
}
int main()
{
int iValue1=0;

printf("Enter number\n");
scanf("%d" , &iValue1);

Pattern(iValue1);
return 0;
}