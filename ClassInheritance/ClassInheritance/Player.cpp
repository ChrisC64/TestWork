#include "Player.h"

using namespace BC;

void Player::update()
{
	printf("Update called from Player class!\n");
}

void Player::draw()
{
	printf("Draw() called from Player class!\n");
}

void Player::init()
{
	printf("Init() called from Player class!\n");

	this->setPosition(0.0, 0.0, 0.0);
	
	printf("Player pos: %f x %f y %f z \n", this->mPositionVec.x, this->mPositionVec.y, this->mPositionVec.z); 
}

/*********
* Operator Overloads
**********/
//std::ostream& Player::operator<<(std::ostream os)
//{
//	os << "X: " <<  mPositionVec.x << " Y: " << mPositionVec.y << " Z: " << mPositionVec.z; 
//	return os;
//}

/////////////////
// SET METHODS //
/////////////////

void Player::setPosition(Vector posVec)
{
	this->mPositionVec.x = posVec.x;
	this->mPositionVec.y = posVec.y;
	this->mPositionVec.z = posVec.z;
}

void Player::setPosition(float x, float y, float z)
{
	this->mPositionVec.x = x;
	this->mPositionVec.y = y;
	this->mPositionVec.z = z;
}

void Player::setRotation(float x, float y, float z)
{
	this->mRotationVec.x = x;
	this->mRotationVec.y = y;
	this->mRotationVec.z = z;
}

void Player::setTranslation(float x, float y, float z)
{
	this->mTranslationVector.x = x;
	this->mTranslationVector.y = y;
	this->mTranslationVector.z = z;
}

void Player::setHeight(float h)
{
	this->height = h;
}
void Player::setWidth(float wi)
{
	this->width = wi;
}

void Player::setWeight(float wg)
{
	this->weight = wg;
}
		
void Player::setName(std::string n)
{
	this->name = n;
}

void Player::setSex(char gender)
{
	this->sex = gender;
}

void Player::setVictoryCry(std::string s)
{
	this->victoryCry = s;
}
		
void Player::setAge(int a)
{
	this->age = a;
}

void Player::setLevel(int lv)
{
	this->level = lv;
}

void Player::addToCurrentExp(int expGained)
{
	this->currentExp = expGained;
}

void Player::setExpToNextLevel(int nextLevel)
{
	this->expToNextLevel = nextLevel;
}

void Player::setCurrManaPoints(int mana)
{
	this->manaPoints = mana;
}

void Player::setMaxManaPoints(int maximum)
{
	this->maxMana = maximum;
}

void Player::setHealthPoints(int currHp)
{
	this->healthPoints = currHp;
}

void Player::setMaxHealthPoints(int maxHp)
{
	this->maxMana = maxHp;
}

void Player::setIsAlive(bool isAlive)
{
	this->bIsAlive = isAlive;
}


/*******************
// GET FUNCTIONS  //
*******************/
BO::BaseGameObject::Vector& Player::getPosition()
{
	return this->mPositionVec;
}

BO::BaseGameObject::Vector& Player::getRotation()
{
	return this->mRotationVec;
}

BO::BaseGameObject::Vector& Player::getTranslation()
{
	return this->mTranslationVector;
}
		
float Player::getHeight()
{
	return this->height;
}

float Player::getWidth()
{
	return this->width;
}

float Player::getWeight()
{
	return this->weight;
}
			 
std::string Player::getName()
{
	return this->name;
}

char Player::getSex()
{
	return this->sex;
}

std::string Player::getVictoryCry()
{
	return this->victoryCry;
}
			 
int Player::getAge()
{
	return this->age;
}

int Player::getLevel()
{
	return this->level;
}

int Player::getCurrentExp()
{
	return this->currentExp;
}

int Player::getExpToNextLevel()
{
	return this->expToNextLevel;
}

int Player::getManaPoints()
{
	return this->manaPoints;
}

int Player::getMaxManaPoints()
{
	return this->maxMana;
}

int Player::getHealthPoints()
{
	return this->healthPoints;
}

int Player::getMaxHealthPoints()
{
	return this->maxHealth;
}
		
bool Player::getIsAlive()
{
	return this->bIsAlive;
}

/**********
* BaseGameObject Methods
***********/