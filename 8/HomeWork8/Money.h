#pragma once
class Money
{
private:
	int rubley;
	int kopeek;
public:
	void set(int newRubley, int newKopeek);
	int getRubley();
	unsigned char getKopeek();
	void addMoney(Money& someMoney);
	void withdrawMoney(Money& someMoney);
};