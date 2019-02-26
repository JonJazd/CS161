/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:6/5/18
** Description:An object that represents a ship in battleship
*********************************************************************/ 

#ifndef Ship_HPP
#define Ship_HPP
#include <string>
using std::string;

class Ship{
    private:
    string name;
    int length;
    int damage;
    public:
    Ship(string,int);
    void takeHit();
    string getName();
    int getLength();
    int getDamage();
};

#endif