/*
Accept number of from user and display below pattern.
Input :ino = 4
Output: # 1 * # 2 # * 3 # * # 4 *
Program Layout :
*/
#include<stdio.h>
void Pattern(int ino)
{
    int i=0;
    {
    for(i=1;i<=ino;i++)
    {
        printf("#\t %d\t *\t", i);
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