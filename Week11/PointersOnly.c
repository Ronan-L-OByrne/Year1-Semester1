/* Program that asks user to input 2 integers. Use only pointers to find the sum of these numbers and display the value 
stored in the variable sum
Author: Ronan O'Byrne
Date: 24/11/2015
*/

#include <stdio.h>
main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptr3;
    
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;
    
    printf("Please enter 2 numbers.\n");
    scanf("%d", &*ptr1);
    scanf("%d", &*ptr2);
    
    *ptr3 = *ptr1 + *ptr2;
    
    printf("The sum of those two numbers is %d", *ptr3);
    
    getchar();
    getchar();
}