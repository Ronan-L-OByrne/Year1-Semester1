/*Program to print out the numbers 1 to 10 in decending order
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int num;
    num=10;
    
    while(num!=0)
    {
        printf("%d,",num);
        num = num--;
    }
    getchar();
    getchar();
}