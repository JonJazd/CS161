/*
**Author: Jonathan Jazdzewski
** Date: 05/02/2018
** Description:An object that creates a Team with 5 players
*********************************************************************/

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Team.hpp"
using std::string;

Player pointGuard,shootingGuard,smallForward,powerForward,center;

void Team::setPointGuard(Player a){
    pointGuard = a;
}
void Team::setShootingGuard(Player b){
    shootingGuard = b;
}
void Team::setSmallForward(Player c){
    smallForward = c;
}
void Team::setPowerForward(Player d){
    powerForward = d;
}
void Team::setCenter(Player e){
    center = e;
}
Player Team::getPointGuard(){
    return pointGuard;
}
Player Team::getShootingGuard(){
    return shootingGuard;
}
Player Team::getSmallForward(){
    return smallForward;
}
Player Team::getPowerForward(){
    return powerForward;
}
Player Team::getCenter(){
    return center;
}
int Team::totalPoints(){
    int f = pointGuard.getPoints();
    int g = shootingGuard.getPoints();
    int h = smallForward.getPoints();
    int i = powerForward.getPoints();
    int j = center.getPoints();
    return f + g + h + i + j;
}
Team::Team(Player f, Player g, Player h, Player i, Player j){
    pointGuard = f;
    shootingGuard = g;
    smallForward = h;
    powerForward = i;
    center = j;
}