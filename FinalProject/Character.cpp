#include <iostream>
#include "Character.h"

Character::Hero()
{
	health = 5667;
	attack = 122;
	stamina = 9009;
	return;
}
Character::Hero(int healthInitial, int attackInitial, int staminaInitial)
{
	health = healthInitial;
	attack = attackInitial;
	stamina = staminaInitial;
	return;
}
Character::Enemy()
{
	health = 9999;
	attack = 190;
	stamina = 5500;
	return;
}
Character::Enemy(int healthInitial, int attackInitial, int staminaInitial) 
{
	health = healthInitial;
	attack = attackInitial;
	stamina = staminaInitial;
	return;
}

int Character::getHealth() const {
	return health;
}

int Character::getAttack() const {
	return attack;
}

int Character::getStamina() const {
	return stamina;
}

void Character::setHealth(int amount) {
	health = amount;
}

void Character::setAttack(int strength) {
	attack = strength;
	return;
}

void Character::setStamina(int amount) {
	stamina = amount;
	return;
}

void Character::damageHealth(int attack) {
	health -= attack;
	return;
}

void Character::healHealth(int heal) {
	health += heal;
	return;
}

void Character::reduceStamina(int amount) {
	stamina -= amount;
	return;
}

void Character::increaseStamina(int amount) {
	stamina += amount;
	return;
}