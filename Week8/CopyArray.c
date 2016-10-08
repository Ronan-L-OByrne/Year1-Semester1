/*Program to read 5 numbers into an array and copy the contents of this array into another array.
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include <stdio.h>
main()
{
    int num1[5];
    int num2[5];
    int i;
    
    printf("Please enter 5 numbers\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&num1[i]);
    }//end for(i=0;i<5;i++)
    for(i=0;i<5;i++)
    {
        num2[i]=num1[i];
    }//end for(i=0;i<5;i++)
    for(i=0;i<5;i++)
    {
        printf("Array1 = %d\n",num1[i]);
        printf("Array2 = %d\n",num2[i]);
    }//end for(i=0;i<5;i++).
    getchar();
    getchar();
}//end main()