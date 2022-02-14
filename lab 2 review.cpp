// lab 2 review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>    
using namespace std;

class Enemy {
protected:
    float damage;
    string warCry;
public:
    Enemy() {
        damage = 10;
        warCry = "Roars!";
    }
    void attack() {
        cout << warCry << endl;
        cout << "Deals " << damage << " damage to opponent\n";
    }
};

class Skeleton : public Enemy {
public:
    Skeleton() {
        warCry = warCry + "Hssssssssssss, *bone creak*";
    }
    void attack() {
        cout << warCry << endl;
      
        cout << "Deals " << damage << " damage to opponent\n";
        cout << "Deals " << damage << " damage to opponent\n";
    }
};


class Troll : public Enemy {
public:
    Troll() {
        damage = 1.5 * damage;
        warCry = warCry + "Grrrrrrrr";
    }
};

class Ork : public Enemy {
public:
    Ork() {
        warCry = warCry + "WAAAAGHHH i mean AHHHHHHHHHH";
    }
    void attack() {
        cout << warCry << endl;
        cout << "Deals " << damage << " damage to opponent\n";       
        cout << warCry << endl;
        cout << "Deals " << damage << " damage to opponent\n";
    }
};

class DarkOrk : public Enemy {
    string magic;
public:
    DarkOrk() {
        damage = 0;
        magic = "Cause pain!";
        warCry = "waaaaaghhh but edgy";
    }
    void attack() {
        cout << warCry << endl;
        cout << magic << endl;
    }
};
int main() {
    Skeleton sk;
    Troll tr;
    Ork ork;
    DarkOrk dOrk;

    cout << "\nSkeleton's attack:\n";
    sk.attack();
    
    cout << "\nTroll's attack\n";
    tr.attack();

    cout << "\nOrk's attack:\n";
    ork.attack();

    cout << "\nDark Ork's attack\n";
    dOrk.attack();
    return 0;
}