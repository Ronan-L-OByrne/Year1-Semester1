/*Program to rewrite an if statement code as a switch statement. Chap5Q1 p44
Author:Ronan O'Byrne
Date13/10/2015
*/

#include <stdio.h>
main()
{
    char marriage_status;
    
    printf("Please enter your marriage status.\n(S=Single, M=Married, W=Widowed, E=Separated, D=Divorced)\n");
    scanf("%c",&marriage_status);
    switch(marriage_status)
    {
        case'S':
        {
            printf("Single");
            break;
        }
        case's':
        {
            printf("Single");
            break;
        }
        case'M':
        {
            printf("Married");
            break;
        }
        case'm':
        {
            printf("Married");
            break;
        }
        case'W':
        {
            printf("Widowed");
            break;
        }
        case'w':
        {
            printf("Widowed");
            break;
        }
        case'E':
        {
            printf("Separated");
            break;
        }
        case'e':
        {
            printf("Separated");
            break;
        }
        case'D':
        {
            printf("Divorced");
            break;
        }
        case'd':
        {
            printf("Divorced");
            break;
        }
        default:
        {
            printf("error:invalid code");
        }
    }//end switch
    getchar();
    getchar();
}//end main
