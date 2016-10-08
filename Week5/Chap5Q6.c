/*Progrmam to display an input number as a word eg 5=Five
Author:Ronan O'Byrne
Date13/10/2015
*/

#include <stdio.h>
main()
{
    char num;
    
    printf("Please enter any single number from your keypad.\n");
    scanf("%c",&num);
    
    switch(num)
    {
        case'1':
        {
            printf("One");
            break;
        }//end case'1'
        case'2':
        {
            printf("Two");
            break;
        }//end case'2'
        case'3':
        {
            printf("Three");
            break;
        }//end case'3'
        case'4':
        {
            printf("Four");
            break;
        }//end case'4'
        case'5':
        {
            printf("Five");
            break;
        }//end case'5'
        case'6':
        {
            printf("Six");
            break;
        }//end case'6'
        case'7':
        {
            printf("Seven");
            break;
        }//end case'7'
        case'8':
        {
            printf("Eight");
            break;
        }//end case'8'
        case'9':
        {
            printf("Nine");
            break;
        }//end case'9'
        case'0':
        {
            printf("Zero");
            break;
        }//end case'0'
        default:
        {
            printf("Invalid entry.");
            break;
        }//end default
    }//end switch(integer)
    
    getchar();
    getchar();
}//end main()