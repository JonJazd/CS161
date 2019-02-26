/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/11/18
** Description:A function to determine the standard deviation of the age of an array of Person
*********************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include "Person.hpp"
using std::string;
using std::endl;
using std::cout;

double stdDev(Person array[], double length){
    double meanAge = 0;
    double numSum = 0;
    for (int a=0;a<length;a++){
        meanAge += array[a].age;
    }
    meanAge /= length;
    for (int b=0;b<length;b++){
        double avgDiff = meanAge - array[b].age;
        avgDiff *= avgDiff;
        numSum += avgDiff;
        cout << numSum << endl;
    }
    return sqrt(numSum/length);
}
