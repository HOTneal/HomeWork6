#pragma once
class Time
{
private:
	long hours;
	long minutes;
public:
	void setTime(long newHours, long newMinutes);
	long getHours();
	long getMinutes();
	Time operator+(Time &plusTime);
	Time operator-(Time & minusTime);
	Time operator*(int multTimes);
	bool operator<(Time & minusTimes);
	bool operator>(Time & minusTimes);
	bool operator<=(Time & minusTimes);
	bool operator>=(Time & minusTimes);
	bool operator==(Time & minusTimes);
	bool operator!=(Time & minusTimes);
	void Result();
	void ResultComprasion(Time a, Time b, std::string valueComp); // вывод для операторов сравнения
};