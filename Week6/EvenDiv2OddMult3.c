/*Program to divide even numbers by 2 and multiply odd numbers by 3 until the output is 0
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int num,total;
    num=0;
    total=0;
    
    printf("Please enter a number.\n");
    scanf("%d",&num);
    printf("Initial value is %d\n",num);
    
    while(num!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            total=total+1;
            printf("Next value is %d\n",num);
        }//end if
        else
        {
            num=(num*3)+1;
            total=total+1;
            printf("Next value is %d\n",num);
        }//end else
    }//end if
    printf("Value is 1\n");
    printf("Total operations is %d\n",total);
    
    getchar();
    getchar();
}//end main