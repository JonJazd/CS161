/*
**Author: Jonathan Jazdzewski
** Date: 05/02/2018
** Description:An object that creates a player with a name, points, assists, and rebounds.
*********************************************************************/
#include <iostream>
#include <string>
#include "Player.hpp"
using std::string;

string name;
int points, assists, rebounds;

string Player::getName(){
    return name;
}
void Player::setPoints(int w){
    points = w;
}
void Player::setRebounds(int h){
    rebounds = h;
}
void Player::setAssists(int a){
    assists = a;
}
int Player::getPoints(){
    if (points!=-100){
        return points;
    }
}
int Player::getRebounds(){
    if (rebounds!=-100){
        return rebounds;
    }
}
int Player::getAssists(){
    if (assists!=-100){
        return assists;
    }
}
bool Player::hasMorePointsThan(Player p){
    if (points > p.points){
        return true;
    }
    else {
        return false;
    }
}
Player::Player(string b, int c, int d, int e){
    name = b;
    points = c;
    rebounds = d;
    assists = e;
}
Player::Player(){
    name = "";
    points = -100;
    rebounds = -100;
    assists = -100;
}