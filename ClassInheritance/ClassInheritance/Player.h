
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "BaseCharacter.h"
#include "BaseGameObject.h"

namespace BC
{
	class Player : public BaseCharacter , public BO::BaseGameObject 
	{
	protected:

	public:
		void update();
		void draw();
		void init();

		// Operators
		//std::ostream& operator<<(std::ostream os);

		// SET FUNCTIONS
		void setPosition(Vector posVec);
		
		void setPosition(float x, float y, float z);
		void setRotation(float x, float y, float z);
		void setTranslation(float x, float y, float z);
		
		void setHeight(float h);
		void setWidth(float wi);
		void setWeight(float wg);
		
		void setName(std::string n);
		void setSex(char gender);
		void setVictoryCry(std::string s);
		
		void setAge(int a);
		void setLevel(int lv);
		void addToCurrentExp(int expGained);
		void setExpToNextLevel(int nextLevel);
		void setCurrManaPoints(int mana);
		void setMaxManaPoints(int maximum);
		void setHealthPoints(int currHp);
		void setMaxHealthPoints(int maxHp);

		void setIsAlive(bool isAlive);

		// GET METHODS

		Vector& getPosition();
		Vector& getRotation();
		Vector& getTranslation();
		
		float getHeight();
		float getWidth();
		float getWeight();
			 
		std::string getName(); 
		char getSex();
		std::string getVictoryCry();
			 
		int getAge();
		int getLevel();
		int getCurrentExp();
		int getExpToNextLevel(); 
		int getManaPoints();
		int getMaxManaPoints();
		int getHealthPoints(); 
		int getMaxHealthPoints();
		
		bool getIsAlive();

	};
};
#endif PLAYER_H