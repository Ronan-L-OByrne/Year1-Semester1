/* Program that uses 2 float variables input1 and input2. Enter values for these variables then use two pointers to print
the addresses of input1 and input2. Print the addresses of ptr1 and ptr2. Use pointers to print the addresses if input1
and input2 and then use the indirection operator to print whats stored in the pointers.
Author: Ronan O'Byrne
Date: 24/11/2015
*/

#include <stdio.h>
main()
{
    float input1;
    float input2;
    
    float *ptr1;
    float *ptr2;
    
    input1 = 1.2;
    input2 = 4.65;
    
    ptr1 = &input1;
    ptr2 = &input2;
    
    printf("Input1 is stored in %p\n",&input1);
    printf("Input2 is stored in %p\n\n",&input2);
    
    printf("Ptr1 is stored in %p\n",&ptr1);
    printf("Ptr2 is stored in %p\n\n",&ptr2);
    
    printf("Ptr1 contains %p\n",ptr1);
    printf("Ptr3 contains %p\n\n",ptr2);
    
    printf("*Ptr1 contains %.1f\n",*ptr1);
    printf("*Ptr2 contains %.2f\n\n",*ptr2);
    
    getchar();
    getchar();
}