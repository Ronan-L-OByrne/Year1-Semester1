/* Program uses 2 floating point Arrays with 3 elements in each. USING POINTER NOTATION ONLY Enter values into 
the first array then copy them into the other array and display the contents of both arrays.
Author: Ronan O'Byrne
Date: 24/11/2015
*/

#include <stdio.h>
#define Size 3
main()
{
    float Array1[Size];
    float Array2[Size];
    int i;
    
    printf("Please enter 3 numbers.\n");
    
    for(i=0; i<3; i++)
    {
        scanf("%f", &*(Array1+i));
    }
    
    for(i=0; i<3; i++)
    {
        *(Array2+i) = *(Array1+i);
    }
    
    for(i=0; i<3; i++)
    {
        printf("Array1[%d] = %f\n", i, *(Array1+i));
    }
    
    printf("\n");
    
    for(i=0; i<3; i++)
    {
        printf("Array2[%d] = %f\n", i, *(Array2+i));
    }
    
    getchar();
    getchar();
}