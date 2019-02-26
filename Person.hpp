/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/11/18
** Description:A class which contains a person's name and age
*********************************************************************/ 
#ifndef Person_HPP
#define Person_HPP
#include <string>
using std::string;

class Person{
    public:
    string name;
    double age;
    string getName();
    double getAge();
    Person(string b, double c);
};
#endif
