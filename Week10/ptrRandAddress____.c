/*Program which assigns a pointer to any address and shows us what happens (IDK IF THIS IS RIGHT)
Author:Ronan O'Byrne
Date:17/11/2015
*/

#include <stdio.h>
main()
{
    int *ptr;
    int var;
    
    ptr = &var;
    
   printf("*ptr contains %d\n", *ptr);
    
    getchar();
    getchar();
}