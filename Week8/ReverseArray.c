/*Program that reads in 5 numbers to an array and copies them to another array in reverse order.
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include <stdio.h>
main()
{
    int array[5];
    int reverse[5];
    int i;
    int j=4;
    
    printf("Please enter 5 numbers\n");
    printf("----------------------\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }//end for(i=0;i<5;i++)
    
    for(i=0;i<5;i++)
    {
        reverse[j]=array[i];
        
        j--;
    }//end for(i=0;i<5;i++)
    
    printf("\n---\n\n");
    
    for(i=0;i<5;i++)
    {
        printf("%d\n",reverse[i]);
    }//end for(i=0;i<5;i++)
    
    getchar();
    getchar();
}