/*Finding the output of a given function
Author: Ronan O'Byrne
Date: 01/12/2015
*/

#include <stdio.h>
main()
{
    int count = 10, *temp, sum = 0;
    
    temp = &count;
    *temp = 20;
    temp = &sum;
    *temp = count;
    
    printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum);
    
    getchar();
    getchar();
}