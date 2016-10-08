/*Program to use Getchar() and Putchar()
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    char char1;
    char ch;
    
    printf("Please enter 2 characters.\n");
    
    char1=getchar();
    printf("\nYou entered ");
    putchar(char1);
    
    ch=getchar();
    printf("\nYou entered ");
    putchar(ch);
    
    getchar();
    getchar();
}