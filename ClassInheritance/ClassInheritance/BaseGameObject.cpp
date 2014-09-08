#include "BaseGameObject.h"

using namespace BO;

/*******
* Get Functions
********/

BaseGameObject::Vector& BaseGameObject::getPosition()
{
	return mPositionVec;
}

BaseGameObject::Vector& BaseGameObject::getRotation()
{
	return mRotationVec;
}

BaseGameObject::Vector& BaseGameObject::getTranslation()
{
	return mTranslationVector;
}

/**********
* Operators
***********/
std::ostream& BaseGameObject::Vector::operator<<(std::ostream os)
{
	os << "X: " <<  this->x << " Y: " << this->y << " Z: " << this->z; 
	return os;
}
/********
* Set Functions
*********/

void BaseGameObject::setPosition(float x, float y, float z)
{
	this->mPositionVec.x = x;
	this->mPositionVec.y = y;
	this->mPositionVec.z = z;
}

void BaseGameObject::setRotation(float x, float y, float z)
{
	this->mRotationVec.x = x;
	this->mRotationVec.y = y;
	this->mRotationVec.z = z;
}

void BaseGameObject::setTranslation(float x, float y, float z)
{
	this->mTranslationVector.x = x;
	this->mTranslationVector.y = y;
	this->mTranslationVector.z = z;
}

void BaseGameObject::setPosition(Vector posVec)
{
	mPositionVec.x = posVec.x;
	mPositionVec.y = posVec.y;
	mPositionVec.z = posVec.z;
}
