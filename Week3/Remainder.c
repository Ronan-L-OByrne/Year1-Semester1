/*Program using the modulus (ie.%) to calculate and display the remainder of arithmetic operations.
Author:Ronan O'Byrne
Date:29/09/2015
*/

#include <stdio.h>
main()
{
    float re1,re2,re3,re4,re5,re6;
    
    re1=2%2;
    re2=3%2;
    re3=5%2;
    re4=7%3;
    re5=100%33;
    re6=100%7;
    
    printf("%f\n%f\n%f\n%f\n%f\n%f\n",re1,re2,re3,re4,re5,re6);
    
    getchar();
}