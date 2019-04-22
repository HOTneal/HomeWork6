// work9.cpp : Defines the entry point for the console application.
//

#pragma once
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

int maxMinute = 60;

void Time::setTime(long newHours, unsigned char newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}
long Time::getHours()
{
	return this->hours;
}
long Time::getMinutes()
{
	return this->minutes;
}
Time Time::operator+(Time &plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes >= maxMinute){
		result.hours++;
		result.minutes -= maxMinute;
	}
	return result;
}
Time Time::operator-(Time & minusTime)
{
	Time result;
	result.hours=this->hours-minusTime.hours;
	result.minutes=this->minutes-minusTime.minutes;
	if (result.minutes <= 0){
		result.hours--;
		result.minutes += maxMinute;
	}
	return result;
}
Time Time::operator*(int multTimes)
{
	Time result;
	unsigned char resMin;

	result.hours=this->hours * multTimes;
	result.minutes=this->minutes * multTimes;

	resMin = result.minutes / maxMinute;
	result.hours += (int)resMin;

	while(result.minutes >= maxMinute)
		result.minutes -= maxMinute;

	return result;
}

void Time::Result()
{
	cout << this->hours << " hours " << this->minutes << " minuts" << endl; 
}

int main()
{
	Time a, b, plus, minus, mult;
	int valueMult = 5;

	a.setTime(9,30);
	b.setTime(5,10);

	plus=a+b;
	minus=a-b;
	mult=a*valueMult;

	plus.Result();
	minus.Result();
	mult.Result();
}
