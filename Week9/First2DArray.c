/*Program that lets the user enter values into a 2-D array, displays the values, finds the largest and smallest values and calculates the average.
Author:Ronan O'Byrne
Date:10/11/2015
*/

#include <stdio.h>
#define Row 3
#define Col 2
main()
{
    int a[Row][Col];
    int i,j;
    int smallest, largest;
    float average=0;
    
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
            printf("Array[%d][%d]=%d\n",i,j,a[i][j]);
        }//end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    
    smallest=a[0][0];
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            if(a[i][j]<smallest)
            {
                smallest=a[i][j];
            }//end if(a[i][j]<smallest)
        }//end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    printf("\nSmallest=%d\n",smallest);
    
    largest=a[0][0];
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            if(a[i][j]>largest)
            {
                largest=a[i][j];
            }//end if(a[i][j]<largest)
        }//end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    printf("\nLargest=%d\n",largest);
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            average = (float)(average+a[i][j]);
        }//end for(j=0;j<Col;j++)
    }//end for(i=0;i<Row;i++)
    
    average = (float)(average/(Row*Col));
    
    printf("\nAverage=%.2f\n",average);
    
    getchar();
    getchar();
}//end main()

