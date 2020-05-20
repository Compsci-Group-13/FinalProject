#pragma once
class Character {       // The class
private:             // Access specifier
    int health;        // Attribute (int variable)
    int attack;// Attribute (string variable)
    int stamina;
    int vomit;
public:
    int getHealth() const;
    int getAttack() const;
    int getStamina() const;
    void setHealth(int health);
    void setAttack(int strength);
    void setStamina(int stamina);
    void damageHealth(int attack);
    void healHealth(int heal);
    void reduceStamina(int amount);
    void increaseStamina(int amount);
};