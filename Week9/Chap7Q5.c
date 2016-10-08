/*Program to read in numbers to 2 1-D arrays with 5 elements each and then multiply the corrosponding elements.
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#define Arr 5
main()
{
    int a[Arr],b[Arr],mult[Arr];
    int i;
    
    printf("Enter 5 numbers\n");
    for(i=0;i<Arr;i++)
    {
        scanf("%d",&a[i]);
    }//end for(i=0;i<Arr;i++)
    
    printf("\nEnter 5 more numbers.\n");
    for(i=0;i<Arr;i++)
    {
        scanf("%d",&b[i]);
    }//end for(i=0;i<Arr;i++)
    
    for(i=0;i<Arr;i++)
    {
        mult[i]=a[i]*b[i];
        printf("\na[%d]*b[%d] = %d\n", i, i, mult[i]);
    }//end for(i=0;i<Arr;i++)
    
    getchar();
    getchar();
}