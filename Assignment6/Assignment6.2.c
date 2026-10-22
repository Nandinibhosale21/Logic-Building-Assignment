/*Check Admission Eligibility
Problem Statement: A student is eligible for admission if the student's marks are at least 60 and age is at least 
17 years. Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as 
invalid input.
Expected Output:
Input: 75 18 → Eligible for Admission
Input: 55 19 → Not Eligible
Input: 80 16→ Not Eligible
*/
#include <stdio.h>
#include <stdlib.h>
void CheckAdmission (float fMarks, int iAge)
{
if((fMarks<=60==0) && (iAge<=17==0))
{
    printf("student is eligible for admission");
}
else
{
printf("student is not eligible for admission");
}
}
int main ()
{
float fMarks = 0.0f;
int iAge = 0;
printf ("Enter marks and age: "); 
scanf ("%f %d", &fMarks, &iAge);

CheckAdmission (fMarks, iAge);
return EXIT_SUCCESS;
}