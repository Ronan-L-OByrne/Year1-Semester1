/*Program using pointers and displaying what will happen if mistakes are made with delimiters
Author:Ronan O'Byrne
Date:17/11/15
*/

#include <stdio.h>
main()
{
    int var1;
    int *ptr;
    
    var1 = 1;
    ptr = &var1;
    
    //wrong code
    printf("the address of var1 is %d\n", &var1);// this does not show the address
    printf("ptr contains %p\n", ptr);//this shows the address because ptr = &var1
    
    printf("*ptr contains %d\n", ptr);// this shows the same number as the first printf rather than var1
    
    //corrected code
    printf("\nthe address of var1 is %p\n", &var1);// shows the address of var1
    printf("ptr contains %p\n", &ptr);// this shows the address of ptr rather than var1
    
    printf("*ptr contains %d\n", *ptr);// shows the contents of var1
    
    getchar();
    getchar();
}