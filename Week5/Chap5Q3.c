/*Program to read 2 integers and check if the first integer is evenly divisable by the second
Author:Ronan O'Byrne
Date13/10/2015
*/

#include <stdio.h>
main()
{
    int first;
    int second;
    
    printf("Please enter a number.\n");
    scanf("%d",&first);
    printf("Please enter another number.\n");
    scanf("%d",&second);
    
    if(first%second==0)
    {
        printf("The first number is evenly divisable by the second.");
    }//end if(first%second!=0)
    else
    {
        printf("The first number is not evenly divisable by the second.");
    }//end else
    getchar();
    getchar();
}//end main()