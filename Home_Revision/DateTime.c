/*Program to display current date and time
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int i;
    time_t t;
    
    t=time(NULL);
    
    for(i=0;i<2;i++)
    {
        printf("The current date and time are: %s",ctime(&t));
        i--;
        system("cls");
    }
    getchar();
    getchar();
}