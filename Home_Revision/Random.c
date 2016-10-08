/*Program to generate a random number between 1 and 10
Author:Ronan O'Byrne
Date:28/10/2015
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i;
    
    srand(time(NULL));
    for(i=0;i<2;i++)
    {
        printf("%d\n",1 + rand() % 10);
        i--;
        getchar();
    }
    getchar();
    getchar();
    
    return 0;
}