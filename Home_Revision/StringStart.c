/* Program to demonstrate the use of the %s format string in the printf function.
Author: Ronan O'Byrne
Date: 09/12/2015
*/

#include <stdio.h>
main()
{
    char note[9] = "Please !";
    
    printf("1234567890123456789012345\n");
    printf("%s", note);
    printf(".\n");
    printf("%20s", note);
    printf(".\n");
    printf("%-20s", note);
    printf(".\n");
    printf("%.6s", note);
    printf(".\n");
    printf("%20.6s", note);
    printf(".\n");
    printf("%-20.6s", note);
    printf(".\n");
    
    getchar();
    getchar();
}