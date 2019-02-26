#include <iostream>
#include "Taxicab.hpp"
using namespace std;

int main(){
    Taxicab taxi1;
    Taxicab taxi2(5,-8);
    int a = taxi1.getXCoord();
    int b = taxi1.getYCoord();
    int c = taxi2.getXCoord();
    int d = taxi2.getYCoord();
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    taxi1.moveY(3);
    int e = taxi1.getDistanceTraveled();
    cout << e << endl;
    taxi1.moveY(-4);
    int f = taxi1.getDistanceTraveled();
    cout << f << endl;
    taxi1.moveX(-1);
    int g = taxi1.getDistanceTraveled();
    cout << g <<endl;
    taxi2.moveY(7);
    int h = taxi2.getYCoord();
    cout << h << endl;
    return 0;
}