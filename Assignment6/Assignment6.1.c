/*Calculate Electricity Bill
Problem Statement: Accept the number of electricity units consumed and calculate the total bill 
using the following slab-wise rates. Each slab rate applies only to units within that slab.
Expected Output:
Input: 80 → Bi11 = 400.00
Input: 150 → Bi11 = 850.00
Input: 250 → Bi11 = 1700.00
*/
#include <stdio.h>
#include <stdlib.h>
void CalculateElectricityBill(int iUnits)
{
float fBill = 0.0f;
if(iUnits<0)
{
    printf("invaild units");
}
else if(iUnits<100)
{
    fBill=iUnits*5.0;
}
else if(iUnits<=200)
{
    fBill=(100*5.0)+((iUnits-100)*7.0);
}
else 
{
    fBill=(100*5.0)+((iUnits-100)*7.0);
}
    printf("Bill=%.2f\n", fBill);
}

int main ()
{
int iUnits = 0;
printf ("Enter consumed units: "); 
scanf ("%d", &iUnits) ;
CalculateElectricityBill(iUnits);
return EXIT_SUCCESS;
}