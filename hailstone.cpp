/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:4/20/18
** Description:A program to get an enetered integer to 1 and display the number of steps taken.
*********************************************************************/ 
#include <iostream>

int hailstone(int num)
{
    int a;
    a = 0;
    
    while (num !=1){
        if (num%2==1)
        {
            num *=3;
            num +=1;
        }
        else if (num%2==0)
        {
            num/=2;
        }
        else
        {

        }
        a++;
    }
    return a;
}