/*Program to allow user to enter 4 numbers into an array, then display them in a given order
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include<stdio.h>
main()
{
    int array1[4];
    int array2[4];
    int i;
    
    printf("Please enter 4 numbers\n");
    printf("----------------------\n");
    
    for(i=0;i<4;i++)
    {
        scanf("%d",&array1[i]);
    }//end for(i=0;i<4;i++)
    
    printf("---\n");
    
    for(i=0;i<4;i++)
    {
        printf("%d\n",array1[i]);
    }//for(i=0;i<4;i++)
    
    printf("---\n");
    
    array2[0]=array1[1];
    array2[1]=array1[0];
    array2[2]=array1[3];
    array2[3]=array1[2];
    
    for(i=0;i<4;i++)
    {
        printf("%d\n",array2[i]);
    }//for(i=0;i<4;i++)
    
    getchar();
    getchar();
}