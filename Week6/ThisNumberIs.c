/*Program to print numbers 1 - 10 with a message stating which number is 3 and which is 7
Author:Ronan O'Byrne
Date:20/10/2015
*/

#include <stdio.h>
main()
{
    int total;
    
    total=1;
    
    while(total<11)
    {
        if(total!=3 && total!=7)
        {
            printf("%d\n",total);
            total=total++;
        }//end if
        if(total==3)
        {
            printf("This number is 3\n");
            total=total++;
        }//end if
        if(total==7)
        {
            printf("This number is 7\n");
            total=total++;
        }//end if
    }//end while
    getchar();
    getchar();
}//end main