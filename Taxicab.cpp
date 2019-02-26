/*
**Author: Jonathan Jazdzewski
** Date: 04/29/2018
** Description:An object that creates a imaginary taxi that drives from point A to point B and returns the distance traveled.
*********************************************************************/
#include <iostream>
#include "Taxicab.hpp"
#include <cmath>

int X, Y, Dist;

int Taxicab::getXCoord(){
    return X;
}
int Taxicab::getYCoord(){
    return Y;
}
int Taxicab::getDistanceTraveled(){
    return Dist;
}
void Taxicab::moveX(int x){
    Dist += std::abs(x);
    X += x;
}
void Taxicab::moveY(int y){
    Dist += std::abs(y);
    Y += y;
}
Taxicab::Taxicab(int xx, int yy){
    X = xx;
    Y = yy;
    Dist = 0;
}
Taxicab::Taxicab(){
    X = 0;
    Y = 0;
    Dist = 0;
}