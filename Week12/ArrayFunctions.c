/* Use an array to store 5 numbers, find the lowest and highest, calculate the average, store the same numbers in
another array in reverse order, display the contents of both arrays side by side
Author: Ronan O'Byrne
Date: 01/12/2015
*/

#include <stdio.h>
#define fl 5
main()
{
    float array[fl], array1[fl];
    int i, j=4;
    float low, high, average=0;
    
    printf("Please enter in 5 numbers.\n");
    for(i=0;i<fl;i++)
    {
        scanf("%f",&*(array+i));
    }//end for(i=0;i<fl,i++)
    
    low = *(array+0);
    for(i=0;i<fl;i++)
    {
        if(low>*(array+i))
        {
            low = *(array+i);
        }//end if(*(array+i)<low)
    }//end for(i=0;i<fl,i++)
    printf("The lowest number is %f\n",low);
    
    high = 2;
    for(i=0;i<fl;i++)
    {
        if(high<*(array+i))
        {
            high = *(array+i);
        }//end if(*(array+i)>high)
    }//end for(i=0;i<fl,i++)
    printf("The highest number is %f\n",high);
    
    for(i=0;i<fl;i++)
    {
        average = average + *(array+i);
    }//end for(i=0;i<fl,i++)
    average = average / i;
    printf("The average of the numbers is %f\n", average);
    
    for(i=0;i<fl;i++)
    {
        *(array1+j)=*(array+i);
        
        j--;
    }
    
    for(i=0;i<fl;i++)
    {
        printf("%f  -   %f\n",*(array+i),*(array1+i));
    }
    
    getchar();
    getchar();
}