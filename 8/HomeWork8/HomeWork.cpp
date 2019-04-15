#include "pch.h"
#include <iostream>
#include "Money.h"

using namespace std;

int summRub;
unsigned char summKop;

int raznostRub;
unsigned char raznostKop;

void Money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

unsigned char Money::getKopeek() {
	return this->kopeek;
}

void Money::addMoney(Money& someMoney)
{
	summRub = rubley + someMoney.rubley;
	summKop = kopeek + someMoney.kopeek;

	if (summKop >= 60) {
		summKop -= 60;
		summRub += 1;
	}

	cout << "+: " << static_cast<unsigned>(summRub) << "," << static_cast<unsigned>(summKop) << " RUB" << endl << endl;
}

void Money::withdrawMoney(Money& someMoney)
{
	if (kopeek > 60 || someMoney.kopeek > 60) {
		cout << "Error: kopeek could not be less 60";
		return;
	}

	if (rubley < someMoney.rubley) {
		cout << "Error: cash1.rubley could not be less cash2.rubley" << endl;
		return;
	}

	raznostRub = rubley - someMoney.rubley;
	raznostKop = kopeek - someMoney.kopeek;

	if (raznostKop >= 60) {
		raznostKop -= 256 - 60;
		raznostRub -= 1;
	}
	
	cout << "-: " << static_cast<unsigned>(raznostRub) << "," << static_cast<unsigned>(raznostKop) << " RUB" << endl;
}

int main()
{
	Money cash1;
	Money cash2;

	cash1.set(80, 60);
	cash2.set(35, 20);

	cash1.addMoney(cash2);
	cash1.withdrawMoney(cash2);
}