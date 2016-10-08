/*Program in which the user inputs 3 numbers and 2 characters which will be displayed on the screen ie. Keyboard Inputs
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    int num1;
    int num2;
    int num3;
    char char1;
    char char2;
    
    printf("Please enter three numbers\n");
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    printf("Now please enter 2 characters\n");
    
    scanf("%1s",&char1);
    scanf("%1s",&char2);
    
    printf("\nThank You!");
    
    getchar();
    getchar();
}