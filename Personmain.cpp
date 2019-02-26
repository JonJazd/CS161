#include <iostream>
#include <string>
#include "Person.hpp"
using namespace std;

double stdDev(Person array[],double);

int main(){
    Person P1("A",92);
    Person P2("B",77);
    Person array[2] = {P1,P2};
    double std = stdDev(array,2);
    cout << std << endl;
}