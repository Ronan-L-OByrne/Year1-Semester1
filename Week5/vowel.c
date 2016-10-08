/* Program that asks the user to enter a character and tells the user if the character is a vowel (a,e,i,o,u) or not.
Author:Ronan O'Byrne
Date13/10/2015
*/

#include <stdio.h>
main()
{
    char input;
    
    printf("Please enter a character from your keyboard.\n");
    scanf("%c",&input);
    
    switch(input)
    {
        case'a':
        {
            printf("You have entered a vowel.\n");
            break;
        }//end case'a'
        case'e':
        {
            printf("You have entered a vowel.\n");
            break;
        }//end case'e'
        case'i':
        {
            printf("You have entered a vowel.\n");
            break;
        }//end case'i'
        case'o':
        {
            printf("You have entered a vowel.\n");
            break;
        }//end case'o'
        case'u':
        {
            printf("You have entered a vowel.\n");
            break;
        }//end case'u'
        default:
        {
            printf("You did not enter a vowel.");
            break;
        }//end default
    }//end switch
    
    getchar();
    getchar();
}//end main