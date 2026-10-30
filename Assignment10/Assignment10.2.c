/*Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input :5.3  9.78
Output :51.834
*/
#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    double dare=0.0;
    if(dare<0.0)
    {
        dare= fWidth-fHeight;
    }
    dare= fWidth*fHeight;
    return dare;
}
int main()
{
float fValue1 = 0.0f, fValue2 = 0.0f;
double dRet = 0.0;
printf("Enter width\n");
scanf("%f", &fValue1);
printf("Enter height\n");
scanf("%f", &fValue2);

dRet = RectArea(fValue1, fValue2);
printf("Area of rectangle is:%f",dRet);

return 0;
}