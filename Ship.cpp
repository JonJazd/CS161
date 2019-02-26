/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:6/5/18
** Description:An object that represents a ship in battleship
*********************************************************************/

#include <iostream>
#include "Ship.hpp"
#include <string>
using std::string;
using std::cout;
using std::endl;

string name;
int length;
int damage;

void Ship::takeHit(){
    damage += 1;
}
string Ship::getName(){
    return name;
}
int Ship::getLength(){
    return length;
}
int Ship::getDamage(){
    return damage;
}
Ship::Ship(string nam, int l){
    name = nam;
    length = l;
    damage=0;
}