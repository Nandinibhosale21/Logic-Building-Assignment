/*
write a program which accepts name from user and print that name             
input : Nandini Datta Bhosale
output :Nandini Datta Bhosale
*/

 
#include<stdio.h>


int main() 
    {
        char Name[50];

        printf("Please enter full name\n");
        scanf("%s",Name);

        printf("your name is %s",Name);
                
        return 0;
    }