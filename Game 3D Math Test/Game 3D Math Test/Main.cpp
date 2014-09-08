/***********************
| I will be doing some basic Math functions (Distance between points, rotating objects over time, Finding points)
| and trying to create simple basic functions to use in 3D game math designs. I want to try and lay out a template, and 
| make sure I have the logic correct for performing such functions.
*************************/
#include <iostream>
#include <math.h>
#include <Windows.h>

#define PI = 3.914159265359

struct Point3D
{
	float x;
	float y; 
	float z;
	Point3D(float, float, float);
};

struct Point2D
{
	float x;
	float y;
	Point2D(float, float);
};

struct Clock
{
	Clock();

	void Start();
	void Stop();
	void Reset();

	void SetCurrTimeStamp();
	void SetDeltaTime();

	float GetDeltaTime();

	float dt;
	float secsPerCnt;
	__int64 cntsPerSec;
	__int64 prevTimeStamp;
	__int64 currTimeStamp;
};

float distance2D(float x1, float y1, float x2, float y2);
float distance3D(float x1, float y1, float z1, float x2, float y2, float z2);

bool CollisionCheck2D_AABB(const Point2D &p1, const Point2D &p2);
bool CollisionCheck3D_AABB(const Point3D &p1, const Point3D &p2);
int main()
{
	// Take the counts per second (frequency) at the start of the program
	/*float dt = 0;
	__int64 cntsPerSec = 0;
	QueryPerformanceFrequency((LARGE_INTEGER*)&cntsPerSec);
	float secsPerCnt = 1.0f / (float)cntsPerSec; 

	__int64 prevTimeStamp = 0;
	QueryPerformanceCounter((LARGE_INTEGER*)&prevTimeStamp);
	__int64 currTimeStamp = 0;
	do
	{
		QueryPerformanceCounter((LARGE_INTEGER*)&currTimeStamp);
		dt = (currTimeStamp - prevTimeStamp) * secsPerCnt;

		std::cout << "Time: " << dt << std::endl;
	}while(dt <= 10);*/

	/*Clock myClock = Clock();

	do
	{
		myClock.SetDeltaTime();
		std::cout << "Time: " << myClock.GetDeltaTime() << std::endl;
	}while(myClock.GetDeltaTime() <= 10);*/

	Point2D point1(3.0, 0.0);
	Point2D point2(1.5, 0.0);
	bool bCheck= CollisionCheck2D_AABB(point1, point2) ;
	std::cout << "The distance between Point1: (" << point1.x << "," << point1.y << ") and Point2: (" << point2.x << "," << point2.y << ")" << std::endl;
	std::cout << "Dist: " << distance2D(point1.x, point1.y, point2.x, point2.y) << std::endl;
	std::cout << "Collision check: " << bCheck << std::endl;
	return 0;
}

// Struct object functions
Point2D::Point2D(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point3D::Point3D(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


float distance2D(float x1, float y1, float x2, float y2)
{
	// Local variables
	float dx;
	float dy;
	float dist;
	// Calculate difference between points
	dx = x2 - x1;
	dy = y2 - y1;

	pow(dx, 2);
	pow(dy, 2);

	return dist = sqrt(dx + dy);
}

float distance3D(float x1, float y1, float z1, float x2, float y2, float z2)
{
	// Local variables
	float dx;
	float dy;
	float dz;
	float dist;
	// Calculate difference between points
	dx = x2 - x1;
	dy = y2 - y1;
	dz = z2 - z1;

	pow(dx, 2);
	pow(dy, 2);
	pow(dz, 2);

	return dist = sqrt(dx + dy + dz);

}

Clock::Clock()
{
	this->dt				= 0;
	this->cntsPerSec		= 0;
	this->prevTimeStamp	= 0;
	this->currTimeStamp	= 0;
	this->secsPerCnt				= 0;

	Start();
}

void Clock::Start()
{
	QueryPerformanceFrequency((LARGE_INTEGER*)&cntsPerSec);
	secsPerCnt = 1.0f / (float)cntsPerSec; 
	QueryPerformanceCounter((LARGE_INTEGER*)&prevTimeStamp);
}
// Should instead freeze the current time, and then later when we call back "Start()" it should continue timer without adding any of the elapsed time
void Clock::Stop()
{
	QueryPerformanceCounter((LARGE_INTEGER*)&currTimeStamp);
	dt = (currTimeStamp - prevTimeStamp) * secsPerCnt;
}

void Clock::SetCurrTimeStamp()
{
	QueryPerformanceCounter((LARGE_INTEGER*)&currTimeStamp);
}

float Clock::GetDeltaTime()
{
	return dt;
}


void Clock::SetDeltaTime()
{
	QueryPerformanceCounter((LARGE_INTEGER*)&currTimeStamp);
	dt = (currTimeStamp - prevTimeStamp) * secsPerCnt;
}

void Clock::Reset()
{
	dt = 0;
	currTimeStamp = 0;
	prevTimeStamp = 0;
	secsPerCnt    = 0;
}

// Min value = Top Left corner, Max value = Bottom right corner

bool CollisionCheck2D_AABB(const Point2D &p1, const Point2D &p2)
{
	if (abs(p1.x - p2.x) > (p1.x/2 + p2.x/2)) return false;
	if (abs(p1.y - p2.y) > (p1.y/2 + p2.y/2)) return false;
	return true;
}

bool CollisionCheck3D_AABB(const Point3D &p1, const Point3D &p2)
{
	if (abs(p1.x - p2.x) > (p1.x/2 + p2.x/2)) return false;
	if (abs(p1.y - p2.y) > (p1.y/2 + p2.y/2)) return false;
	if (abs(p1.z - p2.z) > (p1.z/2 + p2.z/2)) return false;
	return true;
}
