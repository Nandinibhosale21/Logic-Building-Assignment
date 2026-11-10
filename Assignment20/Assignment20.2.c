/*
Accept number of from user and display below pattern.
Input :ino = 5  
Output: 5 # 4 # 3 # 2 # 1 #
Program Layout :
*/
#include<stdio.h>
void Pattern(int ino)
{
    int i=0;
    {
    for(i=ino;i>=1;i--)
    {
        printf("%d\t #\t", i);
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