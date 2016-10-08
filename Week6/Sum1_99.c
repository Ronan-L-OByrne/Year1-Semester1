/*Program to find the sum of all integers in the range 1 to 99
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int num1,total;
    
    total=0;
    
    for(num1=1;num1<100;num1++)
    {
        total=total+num1;
    }
    printf("total=%d",total);
    
    getchar();
    getchar();
}