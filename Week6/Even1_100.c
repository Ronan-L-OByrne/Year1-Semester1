/*Program to print out the even numbers between 1 and 100 separated by commas
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int num;
    
    num=1;
    
    printf("(");
    while(num<100)
    {
        if(num%2==0)
        {
            printf("%d,",num);
            num=num++;
        }//end if
        else
        {
            num=num++;
        }
    }//end while
    printf("100)");
    
    getchar();
    getchar();
}//end main