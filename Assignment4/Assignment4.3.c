/*Find the Greater of Two Numbers
Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message.
Expected Output:
Input: 10 20 → 20 is Greater
Input: 50 30 → 50 is Greater
Input: 15 15 → Both Numbers Are Equal
*/
#include <stdio.h>
#include<stdlib.h>
void FindGreater (int iFirst, int isecond)
{
if (iFirst>isecond)
{
    printf("First number is Greater");
}
else if(isecond>iFirst)
{
    printf("Second number is Greater");
}
else 
{
    printf("Both are equal");
}
}
int main ()
{
int iValue1 = 0;
int iValue2 = 0;

printf ("Enter two numbers:");
scanf("%d %d", &iValue1, &iValue2);

FindGreater (iValue1, iValue2);
return EXIT_SUCCESS;
}