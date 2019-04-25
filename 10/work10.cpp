// work9.cpp : Defines the entry point for the console application.
//

#pragma once
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

int maxMinute = 60;

void Time::setTime(long newHours, long newMinutes)
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

bool Time::operator<(Time & minusTimes)
{
	if (this->hours < minusTimes.hours)
		return true;
	else if(this->hours == minusTimes.hours)
		return false;
	else 
		return false;
}
bool Time::operator>(Time & minusTimes)
{
	if (this->hours > minusTimes.hours)
		return true;
	else if(this->hours == minusTimes.hours)
		return false;
	else 
		return false;
}

void Time::Result()
{
	cout << this->hours << " hours " << this->minutes << " minuts" << endl; 
}


void main()
{
	Time a, b, plus, minus, mult;
	Time arrA[10];
	Time arrB[10];

	int valueMult = 5;

	a.setTime(10,30);
	b.setTime(9,10);

	plus=a+b;
	minus=a-b;
	mult=a*valueMult;

	plus.Result();
	minus.Result();
	mult.Result();

	if (a<b)
		cout << "a<b";
	if (a>b)
		cout << "a>b";

	cout << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		arrA[i].setTime(rand() % 23 +1 ,rand() % 59 +0);
		arrB[i].setTime(rand() % 23 +1,rand() % 59 +0);
	}

	Time temp;
	Time temp2;

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arrA[j] > arrA[j + 1]) {
                // меняем элементы местами
                temp = arrA[j];
                arrA[j] = arrA[j + 1];
                arrA[j + 1] = temp;
            }

            if (arrB[j] > arrB[j + 1]) {
                // меняем элементы местами
                temp2 = arrB[j];
                arrB[j] = arrB[j + 1];
                arrB[j + 1] = temp2;
            }
        }
    }

	cout << "TimeA" << endl;
	for (int i = 0; i < 10; i++)
	{
		arrA[i].Result();
	}

	cout << endl << endl;

	cout << "TimeB" << endl;
	for (int i = 0; i < 10; i++)
	{
		arrB[i].Result();
	}

		getchar();
}