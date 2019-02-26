/*
**Author: Jonathan Jazdzewski
** Date: 04/29/2018
** Description:An object that creates a box and gives the volume and surface area of the box.
*********************************************************************/
#ifndef Box_HPP
#define Box_HPP
class Box {
    private:
    double length, width, height;

    public:
    void setLength(double);
    void setWidth(double);
    void setHeight(double);
    double calcVolume();
    double calcSurfaceArea();
    Box(double, double, double);
    Box();
};
#endif