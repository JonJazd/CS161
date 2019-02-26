#include <iostream>
#include <string>
#include "Player.hpp"
#include "Team.hpp"
using namespace std;

int main(){
    Player one("K",12,3,4);
    Player two("T",15,4,5);
    Player three("R",7,1,1);
    Player four("L",5,2,1);
    Player five("G",3,0,0);
    Team SA(one,two,three,four,five);
    string a = one.getName();
    int b = two.getPoints();
    int c = three.getRebounds();
    int d = four.getAssists();
    Player e = SA.getPointGuard();
    int f = e.getAssists();
    Player g = SA.getCenter();
    string h = g.getName();
    int i = SA.totalPoints();
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << f << endl;
    cout << h << endl;
    cout << i << endl;
}
/*
K
15
1
1
4
G
42