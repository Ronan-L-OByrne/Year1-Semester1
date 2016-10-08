/* Question 3 from Programming test 2 years ago(a) Write a program that dynamically allocates memory for ten floating
point numbers. Using this memory, enter the ten numbers and display these in seperate lines (Worth 15%)
Author: Ronan O'Byrne
Date: 09/12/2015
*/

#include<stdio.h>
#include<stdlib.h>7
#define SIZE 10
main()
{
    float *ptr;
    int i;
    
    //Allocate memory
    ptr = (float*)calloc(SIZE,sizeof(float));
    
    //Check if successful
    if(ptr == NULL)
    {
        printf("Failed to allocate memory.\n");
    }//end if
    else
    {
        //Read in Floats
        for(i=0; i<SIZE; i++)
        {
            scanf("%f",&*(ptr+i));
        }//end for
        
        //Display Floats
        for(i=0; i<SIZE; i++)
        {
            printf("%f\n", *(ptr+i));
        }//end for
        
        //Change the size of the allocated memory
        ptr = (float*)realloc(ptr,(SIZE*2)*sizeof(float));
        
        //Check if successful
        if(ptr == NULL)
        {
            printf("Failed to allocate memory.\n");
        }
        
        //Free up memory
        free(ptr);
    }//end else
    
    flushall();
    getchar();
}//end main