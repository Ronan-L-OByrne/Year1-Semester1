/*Program to initialize two arrays and create a third array which conisits of the two corresponding variables in the other arrays multiplied
Author:Ronan O'Byrne
Date:17/11/2015
*/

#include <stdio.h>
#define Row 3
#define Col 4
main()
{
    int i;
    int j;
    int array1[Row][Col] = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12}
                            };
                            
    int array2[Row][Col] = {{12,11,10,9},
                            {8,7,6,5},
                            {4,3,2,1}
                            };
                            
    int array3[Row][Col];
    
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
            printf("Array3[%d][%d] == %d\n",i,j,array3[i][j]);
        }//end for(j=0;j<Col,j++)
    }//end for(i=0;i<Row,i++)
    getchar();
    getchar();
}//end main()