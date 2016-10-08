/*Program that uses pointers to read in the radius of a circle then display the diameter (2*Radius) and the area
of the circle (3.14*Radius^2)
Author: Ronan O'Byrne
Date: 01/12/2015
*/

#include <stdio.h>
main()
{
    float radius, diameter, area;
    float *ptr1, *ptr2, *ptr3;
    
    ptr1 = &radius;
    ptr2 = &diameter;
    ptr3 = &area;
    
    printf("Please enter the length of a circle radius.\n");
    scanf("%f", &*ptr1);
    
    *ptr2 = (*ptr1)*2;
    *ptr3 = (*ptr1)*(*ptr1)*3.14;
    
    printf("The diameter of the circle is %f\n", *ptr2);
    printf("The area of the circle is %f\n", *ptr3);
    
    getchar();
    getchar();
}