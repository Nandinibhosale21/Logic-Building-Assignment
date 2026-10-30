/*Write a program which accept distance in kilometre and convert it into meter.
 (1 kilometre = 1000 Meter)
Input :5
Output :5000
Input :12
Output :12000
*/
#include<stdio.h>
int KMtoMeter(int iNo)
{
    int imeter=0;
    imeter = iNo*1000;
    return imeter;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance\n");
scanf("%d", &iValue);
iRet = KMtoMeter(iValue);
printf("Distance in meter is: %d", iRet);
return 0;
}