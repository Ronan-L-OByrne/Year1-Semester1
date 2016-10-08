/*Program to run as a basic calculator capable of addition, subtraction, multiplication and division
Author:Ronan O'Byrne
Date:29/09/2015
*/

#include <stdio.h>
main()
{
    float num1=0;
    float num2=0;
    char op;
    float ans=0;
    int i;
    
    for(i=0;i<2;i++)
    {
        printf("Please enter a number.\n");
        scanf("%f",&num1);
        
        printf("\nEnter another number.\n");
        scanf("%f",&num2);
        
        printf("\nPlease enter a mathmatical operation.\n");
        printf("(+=addition, -=subtraction, *=multiply, /=divide.)\n");
        
        scanf("%1s",&op);
        
        switch(op)
        {
            case'+':
            {
                op='+';
                
                ans=num1+num2;
                break;
            }//end case
            
            case'-':
            {
                op='-';
                
                ans=num1-num2;
                break;
            }//end case
            
            case'*':
            {
                op='*';
                
                ans=num1*num2;
                break;
            }//end case
            
            case'/':
            {
                op='/';
                
                ans=num1/num2;
                break;
            }//end case
            
            default:
            {
                printf("Invalid character entered");
            }//end default
        }//end switch
        printf("\nYour answer is %f\n",ans);
        printf("\n-------------------------\n\n");
    }//end for
    getchar();
    getchar();
    
}//end main