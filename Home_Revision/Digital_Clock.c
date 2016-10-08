/*Progam to serve as a simple digital clock (ie. HOURS:MINUTES:SECONDS).
Author: Ronan O'Byrne
Date: 11/11/2015
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
int main(void)
{
    int i;
    time_t rawtime;
    struct tm* time_;
    struct date d;
        getdate(&d);
        
    for(i=0; i<2; i++)
    {
        time(&rawtime);
        time_ = localtime(&rawtime);
        
        printf("%d/%d/%d\n",time_->tm_mday, time_->tm_mon+1,time_->tm_year+1900);
        printf("%i:%i:%i\n",time_->tm_hour, time_->tm_min, time_->tm_sec);
        i--;
        
        sleep(1);
        
        system("cls");
    }//end for(i=0; i<2; i++)
    getchar();
    getchar();
    
    return 0;
}//end main(void)
