/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/11/18
** Description:A class which contains a person's name and age
*********************************************************************/
#include <iostream>
#include <string>
#include "Person.hpp"
using std::string;

string name;
double age;

string Person::getName(){
    return name;
}
double Person::getAge(){
    return age;
}
Person::Person(string b, double c){
    name = b;
    age = c;
}
