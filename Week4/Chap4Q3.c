/*Program to input 4 numbers and display them in reverse order
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    int int1;
    int int2;
    int int3;
    int int4;
    
    printf("Please enter 4 integers\n");
    scanf("%d",&int1);
    scanf("%d",&int2);
    scanf("%d",&int3);
    scanf("%d",&int4);
    
    printf("\n%d\n",int4);
    printf("%d\n",int3);
    printf("%d\n",int2);
    printf("%d",int1);
    
    getchar();
    getchar();
}