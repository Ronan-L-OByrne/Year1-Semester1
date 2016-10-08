/*Program to take in a number and display the coresponding day of the week eg 7=Sunday
Author:Ronan O'Byrne
Date13/10/2015
*/

#include <stdio.h>
main()
{
    char num;
    
    printf("Please enter any number between 1 and 7 and i will display the corresponding day of the week.\n");
    scanf("%c",&num);
    
    switch(num)
    {
        case'1':
        {
            printf("Monday");
            break;
        }//end case'1'
        case'2':
        {
            printf("Tuesday");
            break;
        }//end case'2'
        case'3':
        {
            printf("Wednesday");
            break;
        }//end case'3'
        case'4':
        {
            printf("Thursday");
            break;
        }//end case'4'
        case'5':
        {
            printf("Friday");
            break;
        }//end case'5'
        case'6':
        {
            printf("Saturday");
            break;
        }//end case'6'
        case'7':
        {
            printf("Sunday");
            break;
        }//end case'7'
        default:
        {
            printf("Invalid Entry.");
        }
    }
    
    getchar();
    getchar();
}