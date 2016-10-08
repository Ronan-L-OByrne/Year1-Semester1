/*Program to ask the user for a number between 1 and 5 and display the numbers between 1 and 20 that are evenly
divisable by this number.
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int num,div,total;
    
    num=0;
    div=1;
    total=0;
    
    printf("Please enter a number between 1 and 5\n");
    scanf("%d",&num);
    
    if(num<6&&num>0)
    {
        printf("\n");
        while(div<21)
        {
            if(div%num==0)
            {
                total=total+1;
                printf("%d\n",div);
            }//end if
            else
            {
                total=total+0;
            }//end else
            div=div++;
        }//end while
        printf("Total is %d",total);
    }//end if
    else
    {
        printf("Invalid input");
    }//end else
    
    getchar();
    getchar();
}//end main

