/*Program to enter 5 characters into an array and then display them on screen
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include <stdio.h>
main()
{
    char word[6];
    int i;
    
    printf("Please enter a 5 character word\n");
    printf("-------------------------------\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%1s",&word[i]);
    }//end for(i=0;i<5;i++)
    
    printf("-----\n");
    
    for(i=0;i<5;i++)
    {
        printf("%c",word[i]);
    }//end for(i=0;i<5;i++)
    
    getchar();
    getchar();
}
