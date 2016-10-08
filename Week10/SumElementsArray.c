/*Finish the program that comuputes the sum of all the elements in an array
Author:ROnan O'Byrne
Date:17/11/2015
*/

#include<stdio.h>
#define Row 4
#define Col 6
main()
{
    int data[Row][Col] = {{3,2,5,7,4,2},
                          {1,4,4,8,13,1},
                          {9,1,0,2,0,0},
                          {0,2,6,3,-1,-8}
                         };
    
    int i;
    int j;
    int sum = 0;
                         
    printf("%d\n",sum);
    
    for(i=0; i<Row; i++)
    {
        for(j=0; j<Col; j++)
        {
            sum = sum + data[i][j];
            
            printf("Sum = %d\n",sum);
        }//end for(j=0; j<Col; j++)
    }//end for(i=0; i<Row; i++)
    printf("\nThe Sum of all values in the array is %d",sum);
    
    getchar();
    getchar();
}//end main()