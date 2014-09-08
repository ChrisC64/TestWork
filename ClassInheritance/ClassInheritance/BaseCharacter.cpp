#include "BaseCharacter.h"

using namespace BC;

void BaseCharacter::update()
{
	printf("Base Class Update called!\n");
}
void BaseCharacter::draw()
{
	printf("Base Class Draw() called!\n");
}
void BaseCharacter::init()
{
	printf("Base Class Init() called, this shouldn't happen!\n");
}
// SET Functions
void BaseCharacter::setHeight(float h)
{
	height = h;
}
void BaseCharacter::setWidth(float wi)
{
	width = wi;
}
void BaseCharacter::setWeight(float wg)
{
	weight = wg;
}

void BaseCharacter::setName(std::string n)
{
	name = n;
}

void BaseCharacter::setSex(char gender)
{
	sex = gender;
}

void BaseCharacter::setVictoryCry(std::string s)
{
	victoryCry = s;
}

void BaseCharacter::setAge(int a)
{
	age = a;
}

void BaseCharacter::setLevel(int lv)
{
	level = lv;
}

void BaseCharacter::addToCurrentExp(int expGained)
{
	currentExp += expGained;
}

void BaseCharacter::setExpToNextLevel(int nextLevel)
{
	expToNextLevel = nextLevel;
}

void BaseCharacter::setCurrManaPoints(int mana)
{
	manaPoints += mana;
} 

void BaseCharacter::setMaxManaPoints(int maximum)
{
	maxMana = maximum;
}

void BaseCharacter::setHealthPoints(int currHp)
{
	healthPoints += currHp;
}

void BaseCharacter::setMaxHealthPoints(int maxHp)
{
	maxHealth = maxHp;
}

void BaseCharacter::setIsAlive(bool isAlive)
{
	bIsAlive = isAlive;
}
 // GET Functions 

float BaseCharacter::getHeight()
{
	return height;
}

float BaseCharacter::getWidth()
{
	return width;
}

float BaseCharacter::getWeight()
{
	return weight;
}
	 
std::string BaseCharacter::getName()
{
	return name;
}

char BaseCharacter::getSex()
{
	return sex;
}

std::string BaseCharacter::getVictoryCry()
{
	return victoryCry;
}
	 
int BaseCharacter::getAge()
{
	return age;
}

int BaseCharacter::getLevel()
{
	return level;
}

int BaseCharacter::getCurrentExp()
{
	return currentExp;
}

int BaseCharacter::getExpToNextLevel()
{
	return expToNextLevel;
}

int BaseCharacter::getManaPoints()
{
	return manaPoints;
}

int BaseCharacter::getMaxManaPoints()
{
	return maxMana;
}

int BaseCharacter::getHealthPoints()
{
	return healthPoints;
}

int BaseCharacter::getMaxHealthPoints()
{
	return maxHealth;
}

bool BaseCharacter::getIsAlive()
{
	return bIsAlive;
}