/*Program to find sum of all elements in each row and column and find the highest number in an array(3*2)
Author:Ronan O'Byrne
Date:17/11/2015
*/

#include<stdio.h>
#define Row 3
#define Col 2
main()
{
    int array[Row][Col];
    int i, j;
    int sum1=0, sum2=0, sum3=0;
    int sum4=0, sum5=0;
    int highest=0;
    
    for(i=0; i<Row; i++)
    {
        for(j=0; j<Col; j++)
        {
            scanf("%d",&array[i][j]);
        }//end for(j=0; j<Col; j++)
    }//end for(i=0; i<Row; i++)
    
    //Sum of elements in Rows
    for(j=0;j<Col;j++)
    {
        sum1 = sum1 + array[0][j];
    }
    printf("\nSum Row[0] = %d\n",sum1);
    
    for(j=0;j<Col;j++)
    {
        sum2 = sum2 + array[1][j];
    }
    printf("Sum Row[1] = %d\n",sum2);
    
    for(j=0;j<Col;j++)
    {
        sum3 = sum3 + array[2][j];
    }
    printf("Sum Row[2] = %d\n",sum3);
    
    //Sum of elements in Cols
    for(i=0;i<Row;i++)
    {
        sum4 = sum4 + array[i][0];
    }
    printf("\nSum Column[0] = %d\n",sum4);
    
    for(i=0;i<Row;i++)
    {
        sum5 = sum5 + array[i][1];
    }
    printf("Sum Column[1] = %d\n",sum5);
    
    //loking for the highest number in the array
    for(i=0; i<Row; i++)
    {
        for(j=0; j<Col; j++)
        {
            if(highest < array[i][j])
            {
                highest = array[i][j];
            }
        }//end for(j=0; j<Col; j++)
    }//end for(i=0; i<Row; i++)
    
    printf("\nThe largest number in the array is %d\n",highest);
    
    getchar();
    getchar();
}