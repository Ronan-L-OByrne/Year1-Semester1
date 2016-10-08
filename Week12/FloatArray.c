/* Program to initialise an array with 3 floats, 1.1, 2.2 and 3.3 then display the contents outside the bouds of the array
Author: Ronan O'Byrne
Date: 01/12/2015
*/

#include <stdio.h>
#define fl 3
main()
{
    float array[fl] = {1.1, 2.2, 3.3};
    
    printf("%p\n", &array-1);
    printf("%f\n\n", *(array-1));
    
    printf("%p\n", &array+0);
    printf("%f\n\n", *(array+0));
    
    printf("%p\n", &array+1);
    printf("%f\n\n", *(array+1));
    
    printf("%p\n", &array+2);
    printf("%f\n\n", *(array+2));
    
    printf("%p\n", &array+3);
    printf("%f\n\n", *(array+3));
    
    getchar();
    getchar();
}