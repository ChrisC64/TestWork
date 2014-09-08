// A simple class that will be used for a character inside a RPG like game

#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H

#include <string>

namespace BC
{
	class BaseCharacter
	{
	protected:
		// Character specific attributes
		int age;
		int level;
		int currentExp;
		int healthPoints;
		int expToNextLevel;
		int manaPoints;
		int maxHealth;
		int maxMana;

		char sex;

		std::string name;
		std::string victoryCry;
		
		float height;
		float width;
		float weight;
		
		bool bIsAlive;

	public:
		/************
		* SET METHODS
		*************/
		virtual void update() = 0;
		virtual void draw() = 0;
		virtual void init() = 0;

		virtual void setHeight(float h) = 0;
		virtual void setWidth(float wi) = 0;
		virtual void setWeight(float wg) = 0;

		virtual void setName(std::string n) = 0;
		virtual void setSex(char gender) = 0;
		virtual void setVictoryCry(std::string s) = 0;

		virtual void setAge(int a) = 0;
		virtual void setLevel(int lv) = 0;
		virtual void addToCurrentExp(int expGained) = 0;
		virtual void setExpToNextLevel(int nextLevel) = 0;
		virtual void setCurrManaPoints(int mana) = 0;
		virtual void setMaxManaPoints(int maximum) = 0;
		virtual void setHealthPoints(int currHp) = 0;
		virtual void setMaxHealthPoints(int maxHp) = 0;

		virtual void setIsAlive(bool isAlive) = 0;
		/************
		* GET METHODS
		*************/

		virtual float getHeight() = 0;
		virtual float getWidth() = 0;
		virtual float getWeight() = 0;
					 
		virtual std::string getName() = 0;
		virtual char getSex() = 0;
		virtual std::string getVictoryCry() = 0;
					 
		virtual int getAge() = 0;
		virtual int getLevel() = 0;
		virtual int getCurrentExp() = 0;
		virtual int getExpToNextLevel() = 0;
		virtual int getManaPoints() = 0;
		virtual int getMaxManaPoints() = 0;
		virtual int getHealthPoints() = 0;
		virtual int getMaxHealthPoints() = 0;
		
		virtual bool getIsAlive() = 0;
	};
};

#endif