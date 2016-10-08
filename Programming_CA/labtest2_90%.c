/*Programing CA: Lab Test 2: Program where the user inputs 5 values for the number of Gallons used and 5 
values for the number of Miles traveled and the program will then calculate the MPG (Miles per Gallon) using 
the corresponding values from the 2 arrays.
Author: Ronan O'Byrne C15332036 DT228-1
Compiler: Borlands
Operating System: Windows 10
Date: 08/12/2015
*/

#include <stdio.h>
//used to define the size of the arrays (avoids hard coding).
#define SIZE 5
main()
{
    float gallons[SIZE];
    float miles[SIZE];
    float mpg[SIZE];
    int i;
    
    //Tells the user what the program does.
    printf("Miles per Gallon Calculator\n");
    printf("---------------------------\n");
    
    //Allows the user to enter 5 values into the Gallons array.
    printf("Please enter 5 numbers of Gallons.\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%f",&*(gallons+i));
    }//end for(i=0;i<SIZE,i++)
    
    //Allows the user to enter 5 values into the Miles array.
    printf("\nPlease enter the 5 corresponding Miles values.\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%f",&*(miles+i));
    }//end for(i=0;i<SIZE,i++)
    
    //This calculates the Miles per Gallon for the corresponding Gallons and Miles values
    printf("\nmiles / gallons = mpg\n");
    for(i=0;i<SIZE;i++)
    {
        *(mpg+i)=*(miles+i) / *(gallons+i);
    }//end for(i=0;i<SIZE,i++)
    
    //This prints the corresponding Gallons and Miles alongside the MPG which is associated with the 2 values
    for(i=0;i<SIZE;i++)
    {
        printf("%.3f / %.3f = %fmpg\n",*(miles+i), *(gallons+i), *(mpg+i));
    }//end for(i=0;i<SIZE,i++)
    
    //This makes sure the Program dosnt close until the user wants it to.
    getchar();
    getchar();
}//end main()

//56 lines long.  24 lines of comments or white space. 32 lines are actual code.