/*Program to preform various operations such as addition, subtraction, multiplication, division and finding the remainder.
Author:Ronan O'Byrne
Date:29/09/2015
*/

#include <stdio.h>
main()
{
    int add,sub,mult;
    float div,re;
    
    add=15+10;
    sub=15-10;
    mult=15*10;
    div=(float)15/10;
    re=15%3;
    
    printf("%d\n%d\n%d\n%f\n%f\n",add,sub,mult,div,re); //I know it's messy
    
    getchar();
}

//All done :)