// work9.cpp : Defines the entry point for the console application.
//

#pragma once
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

void Time::setTime(long newHours, unsigned char newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}
long Time::getHours()
{
	return this->hours;
}
unsigned char Time::getMinutes()
{
	return this->minutes;
}
Time Time::operator+(Time &plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes >= 60){
		result.hours++;
		result.minutes -= 60;
	}
	return result;
}
Time Time::operator-(Time & minusTime)
{
	Time result;
	result.hours=this->hours-minusTime.hours;
	result.minutes=this->minutes-minusTime.minutes;
	if (result.minutes >= 60){
		result.hours--;
		result.minutes = 256 - 60;
	}
	return result;
}
Time Time::operator*(int multTimes)
{
	Time result;
	long longMult;
	unsigned char resMin;

	result.hours=this->hours * multTimes;
	result.minutes=this->minutes * multTimes;

	resMin = result.minutes / 60;
	result.hours += (int)resMin;

	while(result.minutes >= 60)
		result.minutes -= 60;

	return result;
}

void Time::Result()
{
	cout << this->hours << " hours " << this->minutes << " minuts" << endl; 
}

int main()
{
	Time a, b, plus, minus, mult;
	int valueMult = 8;

	a.setTime(5,59);
	b.setTime(2,30);

	plus=a+b;
	minus=a-b;
	mult=a*valueMult;

	plus.Result();
	minus.Result();
	mult.Result();
}
