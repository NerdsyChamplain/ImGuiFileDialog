//
// Created by joshua.scalia on 4/16/2024.
//

#ifndef COMBAT_H
#define COMBAT_H

class characters
{
protected:
    int health, damage, defense, magDefense;
    int partHealth[];
public:
    characters();
    characters(int, int, int, int, int[]);
    void setHealth(int);
    void setDamage(int);
    void setDefense(int);
    void setMagDefense(int);
    int getHealth();
    int getDamage();
    int getDefense();
    int getMagDefense();
    ~characters();
};

class combat
{

};



#endif //COMBAT_H
