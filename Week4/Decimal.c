/*Program to display 3 float numbers to various decimal places.
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    float dec1;
    float dec2;
    float dec3;
    
    printf("Please enter 3 float numbers\n");
    scanf("%f",&dec1);
    scanf("%f",&dec2);
    scanf("%f",&dec3);
    
    printf("Float number 1 to 4 decimal places is %.4f\n",dec1);
    printf("Float number 2 to 3 decimal places is %.3f\n",dec2);
    printf("Float number 2 to 0 decimal places is %.0f\n",dec3);
    
    getchar();
    getchar();
    
}