#pragma once
class Money
{
private:
	int rubley;
	int kopeek;
public:
	void set(int newRubley, int newKopeek);
	int getRubley();
	int getKopeek();

	Money operator+(Money &plusCash);
	Money operator-(Money & minusCash);
	Money operator*(int multCash);
	void Result();
};