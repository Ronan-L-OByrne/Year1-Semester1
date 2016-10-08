/*Program to input values into a 4*5 array then display any values less than 0 and their Row and Column values.
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#define Row 4
#define Col 5
main()
{
    int a[Row][Col];
    int i,j;
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            scanf("%d",&a[i][j]);
        }// end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            if(a[i][j]<0)
            {
                printf("\na[%d][%d] = %d\n",i,j,a[i][j]);
            }//end if(a[i][j]<0)
        }//end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    
    getchar();
    getchar();
}