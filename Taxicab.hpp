/*
** Author: Jonathan Jazdzewski
** Date: 04/29/2018
** Description:An object that creates a imaginary taxi that drives from point A to point B and returns the distance traveled.
*********************************************************************/
#ifndef Taxi_HPP
#define Taxi_HPP
class Taxicab {
    private:
    int X, Y, Dist;

    public:
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    void moveX(int);
    void moveY(int);
    Taxicab(int, int);
    Taxicab();
};
#endif