/*
**Author: Jonathan Jazdzewski
** Date: 05/02/2018
** Description:An object that creates a player with a name, points, assists, and rebounds.
*********************************************************************/
#ifndef Player_HPP
#define Player_HPP
#include <string>
using std::string;
class Player {
    private:
    string name;
    int points, assists, rebounds;

    public:
    string getName();
    void setPoints(int);
    void setRebounds(int);
    void setAssists(int);
    int getPoints();
    int getRebounds();
    int getAssists();
    bool hasMorePointsThan(Player);
    Player(string,int,int,int);
    Player();
};
#endif