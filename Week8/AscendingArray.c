/*Program to read 3 numbers into an array and then display them in ascending order.
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include <stdio.h>
main()
{
    int array[3];
    int i;
    
    printf("Please enter any 3 numbers\n");
    printf("--------------------------\n");
    
    for(i=0;i<3;i++)
    {
        scanf("%d",&array[i]);
    }//end for(i=0;i<5;i++)
    
    //These if statements put the numbers in ascending order.
    if(array[0]<array[1] && array[1]<array[2])
    {
        printf("%d<%d<%d",array[0],array[1],array[2]);
    }//end if(array[0]<array[1] && array[1]<array[2])s
    
    if(array[1]<array[2] && array[2]<array[0])
    {
        printf("%d<%d<%d",array[1],array[2],array[0]);
    }//end if(array[1]<array[2] && array[2]<array[0])
    
    if(array[2]<array[0] && array[0]<array[1])
    {
        printf("%d<%d<%d",array[2],array[0],array[1]);
    }//end if(array[2]<array[0] && array[0]<array[1])
    
    if(array[2]<array[1] && array[1]<array[0])
    {
        printf("%d<%d<%d",array[2],array[1],array[0]);
    }//end if(array[2]<array[1] && array[1]<array[0])
    
    if(array[0]<array[2] && array[2]<array[1])
    {
        printf("%d<%d<%d",array[0],array[2],array[1]);
    }//end if(array[0]<array[2] && array[2]<array[1])
    
    if(array[1]<array[0] && array[0]<array[2])
    {
        printf("%d<%d<%d",array[1],array[0],array[2]);
    }//end if(array[1]<array[0] && array[0]<array[2])
    
    getchar();
    getchar();
}
