/*Program to convert Fahrenheit temperatures to Celsius. (Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0))
Author:Ronan O'Byrne
Date:03/11/2015
*/

#include <stdio.h>
main()
{
    int Fahrenheit[3];
    int Celsius[3];
    int i;
    
    printf("Please enter 3 Fahrenheit temperatures.\n");
    printf("--------------------------------------\n");
    
    for(i=0;i<3;i++)
    {
        scanf("%d",&Fahrenheit[i]);
    }//end for(i=0;i<3;i++)
    for(i=0;i<3;i++)
    {
        Celsius[i]=(Fahrenheit[i]-32)*(5.0/9.0);
    }//end for(i=0;i<3;i++)
    printf("--------------------------------------");
    for(i=0;i<3;i++)
    {
        printf("\nFahrenheit=%d ~~~ Celsius=%d\n",Fahrenheit[i],Celsius[i]);
    }//end for(i=0;i<3;i++)
    getchar();
    getchar();
}//end main()