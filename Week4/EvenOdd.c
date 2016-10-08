/*Program to tell a user whether they entered an even or odd number
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    int num;
    
    printf("Please enter a number between 1 and 100.\n");
    scanf("%d",&num);
    
    switch(num)
    {
        case'>100':
        {
            printf("THAT NUMBER IS TOO HIGH!");
        }
        case '>1':
        {
            printf("that number is too low.");
        }
        default:
        {
            if(num%2==0)
            {
                printf("Number %d is Even",num);
            }
            
            else
            {
                printf("Number %d is Odd",num);
            }
        }
    }
    
    getchar();
    getchar();
}