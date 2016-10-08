/*Program to find the sum of 5 integers which are entered by the user.
Author:Ronan O'Byrne
Date:29/09/2015
*/

#include <stdio.h>
main()
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    
    printf("Enter a number\n");
    scanf("%d",&v1);
    printf("Enter a number\n");
    scanf("%d",&v2);
    printf("Enter a number\n");
    scanf("%d",&v3);
    printf("Enter a number\n");
    scanf("%d",&v4);
    printf("Enter a number\n");
    scanf("%d",&v5);
    
    v6=v1+v2+v3+v4+v5;
    
    printf("The sum of your numbers is %d\n",v6);
    scanf("%d",&v7);
    
    
    getchar();
    
}