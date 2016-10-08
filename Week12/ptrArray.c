/* Program to read 3 integers into an array then copy these numbers into another array. Display each ones contents side
by side USING POINTER NOTATION ONLY
Author: Ronan O'Byrne
Date: 01/12/2015
*/

#include <stdio.h>
#define Arr 3
main()
{
    int array1[Arr], array2[Arr];
    int i;
    
    printf("Please enter in 3 numbers.\n");
    
    for(i=0;i<Arr;i++)
    {
        scanf("%d",&*(array1+i));
    }//end for(i=0;i<Arr,i++)
    
    for(i=0;i<Arr;i++)
    {
        *(array2+i)=*(array1+i);
        
        printf("%d   -   %d\n",array1[i],array2[i]);
    }//end for(i=0;i<Arr,i++)
    
    getchar();
    getchar();
}//end main