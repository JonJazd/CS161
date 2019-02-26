/*
**Author: Jonathan Jazdzewski
** Date: 04/29/2018
** Description:An object that creates a box and gives the volume and surface area of the box.
*********************************************************************/
#include <iostream>
#include "Box.hpp"

double length,width,height;

void Box::setLength(double l){
    length = l;
}
void Box::setWidth(double w){
    width = w;
}
void Box::setHeight(double h){
    height = h;
}
double Box::calcVolume(){
    return length*width*height;
}
double Box::calcSurfaceArea(){
    return 2*length*width + 2*length*height + 2*height*width;
}
Box::Box(double x, double y, double z){
    setLength(x);
    setWidth(y);
    setHeight(z);
}
Box::Box(){
    setLength(1);
    setWidth(1);
    setHeight(1);
}
