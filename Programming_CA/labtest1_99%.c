/*Programing CA: Program to allow the user to enter a 4-digit year and check whether or not that year is a leap year.
Leap year: Any year divisible by 4, except if its divisable by 100, unless its also divisable by 400.
Author:Ronan O'Byrne_C15332036_DT228
Date:27/10/2015
*/

#include <stdio.h>
main()
{
    int year;
    
    printf("Please enter a year 4-digit year\n");
    scanf("%d",&year);
    
    //if to determine if the number entered was 4-digits long
    if(year<10000 && year>999)
    {
        //if to make sure the year could be a leap year
        if(year%4==0)
        {
            //if to see if the number is divisable by 100 and not 400 to show it is not a leap year
            if(year%100==0 && year%400!=0)
            {
                printf("The year %d is NOT a leap year",year);
            }//end nested if
            
            //All other posibilities in this if should be a leap year
            else
            {
                printf("The year %d is a leap year",year);
            }//end else
        }//end if
        
        //All other values are not leap years
        else
        {
            printf("The year %d is NOT a leap year",year);
        }//end else
    }//end if
    
    else
    {
        printf("That is not a 4-digit year");
    }//end else
    
    getchar();
    getchar();
}//end main