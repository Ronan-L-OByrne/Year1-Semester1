/*CA Assignment: Program to function as a simple maths game. (This games questions use random numbers between 1 and 10 and does not ask to divide '/' for simplicity sake)
Author: Ronan O'Byrne - C15332036
Compiler: Borlands
Operating System: Windows 10
Date Begun: 28/10/2015
Date Submitted: 11/11/2015
*/

#include <stdio.h>
//This "#include" is used to create the working random number generator within the game.
#include <stdlib.h> //standard library.
#define Oper 3
int main()
{
    int  menu=0, questions=0, num1, num2, input=0, ans=0, correct=0, i=0, incorrect=0, random, qnum, q;
    
    char op[Oper] = {'+','-','*'};
    
    printf("                        >>>>>>Simple Maths Quiz<<<<<<                          \n");
    printf("-------------------------------------------------------------------------------");
    //This for is to make sure the program runs until the user says otherwise.
    do
    {
        menu=0;
        
        printf("\n                                >>MAIN MENU<<                                \n");
        printf("-------------------------------------------------------------------------------\n");
        printf("Please enter the number of what you want to do what you would like to do.      \n");
        printf("1. Enter the number of questions you would like to answer.(max 5 questions)    \n");
        printf("2. Start Quiz.                                                                 \n");
        printf("3. Number of questions answered correctly and incorrectly in the last round.   \n");
        printf("4. Exit Program.                                                               \n");
        printf("-------------------------------------------------------------------------------\n\n");
        
        do
        {
            
            scanf("%d",&menu);
            flushall();//makes sure the program can deal with multiple characters being entered.
            printf("--\n");
            
            //Error check.
            if(menu!=1 && menu!=2 && menu!=3 && menu!=4)
            {
                printf("Please enter a number 1-4 from the menu.\n\n");
                
                break;
            }//end if(menu!=1 && menu!=2 && menu!=3 && menu!=4)
        }//end do_while(menu!=1 && menu!=2 && menu!=3 && menu!=4)
        while(menu!=1 && menu!=2 && menu!=3 && menu!=4);
        
        //This dictates where the user will be directed from the main menu.
        switch(menu)
        {
            //Questions.
            case 1:
            {
                do
                {
                    questions = 0;
                    printf("How many questions would you like to answer?(max 5 questions)\n");
                    scanf("%d",&questions);
                    flushall();//makes sure the program can deal with multiple characters being entered.
                    
                    //Error check
                    if(questions!=1 && questions!=2 && questions!=3 && questions!=4 && questions!=5)
                    {
                        printf("Please enter a number 1-5.\n\n");
                    }//end if(questions!=1 && questions!=2 && questions!=3 && questions!=4 && questions!=5)
                    else
                    {
                        printf("You have choosen to do %d questions.\n\n",questions);
                    }//end else
                    
                }//end do while(questions!=1 && questions!=2 && questions!=3 && questions!=4 && questions!=5)
                while(questions!=1 && questions!=2 && questions!=3 && questions!=4 && questions!=5);
                break;
            }//end case 1
            
            //Quiz
            case 2:
            {
                qnum = 0;
                correct = 0;
                incorrect = 0;
                
                if(questions == 0)
                {
                    printf("You have not entered how many questions you would like to answer.\n\n");
                }
                
                //Requires #include <stdlib.h>
                srand(time(NULL));//makes it so the numbers randomize constantly.
                
                for(q=questions; q>0; q--)// q=question so the user dosnt need to re-enter how many questions he would like to answer
                {
                    qnum++;//used when displaying the question number.
                    
                    num1 = 1 + rand() % 10; //Chooses a random number between 1 and 10.
                    num2 = 1 + rand() % 10; //Chooses a random number between 1 and 10.             Requires #include <stdlib.h>
                    random = rand() %3;     //Used to randomly choose a mathmatical operator.
                    
                    printf("Question%d: %d%c%d\n",qnum, num1, op[random], num2);
                    
                    //This switch is the best way i could find to pose the question and it dictates what operator is used.
                    switch(op[random])
                    {
                        //Multiplication
                        case'*':
                        {
                            ans = num1*num2;
                            break;
                        }//end case'*'
                        
                        //Addition
                        case'+':
                        {
                            ans = num1+num2; 
                            break;
                        }//end case'+'
                        
                        //Subtraction
                        case'-':
                        {
                            ans = num1-num2;
                            break;
                        }//end case'-'
                    }//end switch(op[random])
                    
                    scanf("%d",&input);
                    flushall();//makes sure the program can deal with multiple characters being entered.
                    
                    //Check if the input is equal to the answer or not.
                    if(ans == input)
                    {
                        printf("~Correct!\n\n");
                        correct++;//Used in Score section.
                    }//end if(ans==input)
                    else
                    {
                        printf("~Incorrect! The answer was %d.\n\n",ans);
                        incorrect++;//Used in Score section.
                    }//end else
                    
                }//end for(q=questions; q>0; q--)
                break;
            }//end case 2
            
            //Score
            case 3:
            {
                if(correct==0 && incorrect==0)
                {
                    printf("You have not played yet.\n\n");// This makes sure this cant be accesesd before the quiz is completed.
                }
                else
                {
                    //Shows the number of correct and incorrect answers given in the last quiz round.
                    printf("Number Correct:%d.\n",correct);
                    printf("Number Incorrect:%d.\n\n",incorrect);
                }
                
                break;
            }//end case 3
            
            //Exit
            case 4:
            {
                i++;//This makes i not equal 0 and ends the for loop allowing the program to end.
                
                break;
            }//end case 4
        }//end switch(menu)
        
        printf("-------------------------------------------------------------------------------");
    }//end do while(i=0)
    while(i == 0);

    return 0;
}//end main

//51 lines of code are either white space of comments. Actual code takes up 132 lines in total including lines only consisting of brackets or cases and the like.
//There are no mistakes just happy little accidents. :)