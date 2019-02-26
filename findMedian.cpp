/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/11/18
** Description:A function to find the median value of an array
*********************************************************************/ 
#include <iostream>
#include <algorithm>
using std::sort;
using std::cout;
using std::endl;

double findMedian(int a[], int length){
    sort(a, a + length);
    // if even take the middle two values and take the mean
    if (length%2==0)
    {
        int b = length/2;
        double med = (a[b] + a[b-1])/2.0;
        return med;
    }
    // if odd take the middle number
    else if (length%2==1)
    {
        int b = length/2;
        double med = a[b];
        return med;
    }
}