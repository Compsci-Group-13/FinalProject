#include "Character.h"

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
	return;
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

//Constructors
Character::Character() {
	health = 0;
	attack = 0;
	stamina = 0;
}

Character::Character(int initHealth, int initAttack, int initStamina) {
	health = initHealth;
	attack = initAttack;
	stamina = initStamina;
}