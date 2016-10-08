/*Program to see what is in the array a[8]
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#define Array 10
main()
{
    int a[Array];
    int i;
    
    for(i=0; i<10; i++)
    {
        a[i]=9-i;
    }// end for(i=0; i<10; i++)
    for(i=0; i<10; i++)
    {
        printf("1st Array[%d] = %d\n",i ,a[i]);
    }//end for(i=0; i<10; i++)
    
    printf("\n");
    
    for(i=0; i<10; i++)
    {
        a[i]=a[a[i]];
    }//end for(i=0; i<10; i++)
    for(i=0; i<10; i++)
    {
        printf("2nd Array[%d] = %d\n",i ,a[i]);
    }//end for(i=0; i<10; i++)
    getchar();
    getchar();
}//end main()