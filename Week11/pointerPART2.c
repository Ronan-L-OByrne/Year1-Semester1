/*Program to declare an int, a char and two pointers. initialize the variables then print the char and int. 
Print contents of the two pointers then print the addresses stored in the two pointers.
Author: Ronan O'Byrne
Date: 24/11/2015
*/

#include <stdio.h>
main()
{
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    char *ptr3;
    
    num1 = 88;
    char1 = 'R';
    
    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;
    
    printf("num1 is %d, num1 is in address %p\n",num1,&char1);
    printf("char1 is %c, char1 in address %p\n\n",char1,&char1);
    
    printf("ptr1 contains %p\n",ptr1);
    printf("ptr2 contains %p\n\n",ptr2);
    
    printf("*ptr1 contains %d\n",*ptr1);
    printf("*ptr2 contains %c\n\n",*ptr2);
    
    printf("*ptr3 contains %d\n",*ptr3);
    printf("*ptr3 contains %c\n\n",*ptr3);
    
    getchar();
    getchar();
}