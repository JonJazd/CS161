/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:4/20/18
** Description:A program to output the fall distance of an object given how many seconds it fell. 
*********************************************************************/ 
#include <iostream>

double fallDistance(double t)
{
    double dist, g;
    g = 9.8;
    dist = .5*g*t*t;
    return dist;
}