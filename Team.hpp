/*
**Author: Jonathan Jazdzewski
** Date: 05/02/2018
** Description:An object that creates a Team with 5 players
*********************************************************************/

#ifndef Team_HPP
#define Team_HPP
#include <string>
class Team {
    private:
    Player pointGuard,shootingGuard,smallForward,powerForward,center;

    public:
    void setPointGuard (Player);
    void setShootingGuard (Player);
    void setSmallForward (Player);
    void setPowerForward (Player);
    void setCenter (Player);
    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();
    int totalPoints();
    Team(Player, Player, Player, Player, Player);
};
#endif