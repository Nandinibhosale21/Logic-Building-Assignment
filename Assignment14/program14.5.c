/*
 write a program which accepts total amrks and obtained marks from user and calculates percentage
input : 1000   745
output :74.5%
*/

 
#include<stdio.h>

float Percentage(int iTotal,int iObtained)
{
    float fPer = 0.0;

    if(iTotal== 0)
    {
        return 0.0;
    }
    fPer = ((float) iObtained/iTotal) * 100;

    return fPer;

}
int main() 
    {
       int iValue1  = 0,iValue2 = 0;
       float fRet = 0.0;

       printf("Enter total marks:\n");
       scanf("%d",&iValue1);

        printf("Enter obtained marks:\n");
       scanf("%d",&iValue2);


    
       fRet= Percentage(iValue1,iValue2);

       printf("percentage  is :%1f%%\n",fRet);
                
        return 0;
    }