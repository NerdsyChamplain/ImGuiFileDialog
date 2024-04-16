//
// Created by joshua.scalia on 4/16/2024.
//

#include "combat.h"


 characters::characters()
{
    health = 1;
     damage = 1;
     defense = 1;
     magDefense = 1;
}
 characters::characters(int health, int damage, int defense, int magDefense, int partHealth[])
{
    this->health = health;
     this->damage = damage;
     this-> defense = defense;
     this->magDefense = magDefense;
     this->partHealth = new int[]*;
}
void characters::setHealth(int health)
{
     this->health = health;
}
void characters::setDamage(int damage)
{
     this->damage = damage;
}
void characters::setDefense(int defense)
{
     this->defense = defense;
}
void characters::setMagDefense(int magDefense)
{
    this->magDefense = magDefense;
}
int characters::getHealth()
{
     return health;
}
int characters::getDamage()
{
     return damage;
 }
int characters::getDefense()
{
   return defense;
 }
int characters::getMagDefense()
{
     return magDefense;
}
 characters::~characters()
{
    delete this;
}

