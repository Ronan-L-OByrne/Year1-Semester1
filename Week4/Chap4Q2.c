/*Single scanf() to input many vaules
Author:Ronan O'Byrne
Date:06/10/2015
*/

#include <stdio.h>
main()
{
    int first;
    int second;
    int third;
    float principal;
    float rate;
    float time;
    char keyval1;
    char keyval2;
    char c;
    int i;
    float f;
    double d;
    
    printf("Please input 4 integers, 3 floats, 2 characters, then a char, an int, a float and a double.\n");
    scanf("%d %d %d %f %f %f %c %c %c %d %f %lf",&first,&second,&third,&principal,&rate,&time,&keyval1,&keyval2,&c,&i,&f,&d);
    
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}