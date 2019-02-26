#include <iostream>
#include "Box.hpp"
using namespace std;

int main(){
    Box box(10,9.5,10);
    double le, wi, he;
    double v = box.calcVolume();
    double sa = box.calcSurfaceArea();
    cout << "Volume = " << v << "SA = " << sa <<endl;
    cout << "Enter width, length and height." <<endl;
    cin >> le;
    cin >> wi;
    cin >> he;
    box.setHeight(he);
    box.setLength(le);
    box.setWidth(wi);
    double v1 = box.calcVolume();
    double sa1 = box.calcSurfaceArea();
    cout << "Volume = " << v1 << " SA = " << sa1 <<endl;
    return 0;
}