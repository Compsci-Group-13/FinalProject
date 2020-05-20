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
}

void Character::setAttack(int strength) {
	attack = strength;
}

void Character::setStamina(int amount) {
	stamina = amount;
}

void Character::damageHealth(int attack) {
	health -= attack;
}

void Character::healHealth(int heal) {
	health += heal;
}

void Character::reduceStamina(int amount) {
	stamina -= amount;
}

void Character::increaseStamina(int amount) {
	stamina += amount;
}