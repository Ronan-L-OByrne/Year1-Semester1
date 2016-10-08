/*Program to allow the user to enter 15 numbers then displays them in various orders and formats
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#define Arr 15
main()
{
    int a[Arr];
    int i;
    
    for(i=0;i<Arr;i++)
    {
        scanf("%d",&a[i]);
    }//end for(i=0;i<Arr;i++)
    
    for(i=0;i<Arr;i++)
    {
        printf("%d\n",a[i]);
    }//end for(i=0;i<Arr;i++)
    
    for(i=0;i<Arr;i++)
    {
        printf("%d, ",a[i]);
    }//end for(i=0;i<Arr;i++)
    
    printf("\n");
    
    for(i=Arr-1;i>-1;i--)
    {
        printf("%d, ",a[i]);
    }//end for(i=Arr;i>0;i--)
    
    getchar();
    getchar();
}