#ifndef BASE_GAME_OBJECT_H
#define BASE_GAME_OBJECT_H
#include <iostream>

namespace BO
{
	class BaseGameObject
	{
	protected:
		struct Vector
		{
			float x;
			float y;
			float z;

			std::ostream& operator<<(std::ostream);
		};

		Vector mPositionVec;
		Vector mRotationVec;
		Vector mTranslationVector;

	public:
		/********
		* Operators
		*********/
		//std::ostream& operator<<(std::ostream os);

		/**************
		* SET METHODS *
		***************/
		virtual void setPosition(Vector positionVec) = 0;
		virtual void setPosition(float x, float y, float z) = 0;

		virtual void setRotation(float x, float y, float z) = 0;
		virtual void setTranslation(float x, float y, float z) = 0;
		/****
		* Get Methods
		****/
		
		virtual Vector& getPosition() = 0;
		virtual Vector& getRotation() = 0;
		virtual Vector& getTranslation() = 0;
	};
};
#endif BASE_GAME_OBJECT_H