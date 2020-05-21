#pragma once
class Character {       // The class
private:             // Access specifier
    int health;        // Attribute (int variable)
    int attack;// Attribute (string variable)
    int stamina;
public:

    Character Hero ();
    Character Hero (int healthInitial, int attackInitial, int staminaInitial);
    Character Enemy ();
    Character Enemy (int healthInitial, int attackInitial, int staminaInitial);

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