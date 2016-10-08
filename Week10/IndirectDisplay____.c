/*Program to declare and int and ptr, input a value into the int and indirectly display it then increment the ptr and display
Author:Ronan O'Byrne
Date:17/11/2015
*/

#include <stdio.h>
main()
{
    int var;
    int *ptr1;
    
    scanf("%d",&var);
    ptr1 = &var;
    
    printf("*ptr contains %d\n", *ptr1);
    printf("the address of var is %p\n\n", &var);
    //address == 0019FF44
    
    ptr1++;
    
    printf("*ptr contains %d\n\n", *ptr1);
    
    scanf("%d", "&FB6546");
    printf("%d", "&FB6546");
    
    getchar();
    getchar();
}
