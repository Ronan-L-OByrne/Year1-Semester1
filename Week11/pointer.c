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
    
    num1 = 88;
    char1 = 'R';
    
    ptr1 = &num1;
    ptr2 = &char1;
    
    printf("num1 is %d \nchar1 is %c\n\n",num1,char1);
    
    printf("ptr1 contains %p\n",ptr1);
    printf("ptr2 contains %p\n\n",ptr2);
    
    printf("*ptr1 contains %d\n",*ptr1);
    printf("*ptr2 contains %c\n",*ptr2);
    
    getchar();
    getchar();
}