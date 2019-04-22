#include "pch.h"
#include <iostream>
#include "Money.h"

using namespace std;

int MaxKop = 100;

void Money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

int Money::getKopeek() {
	return this->kopeek;
}

Money Money::operator+(Money &plusCash)
{
	Money result;
	result.rubley = this->rubley + plusCash.rubley;
	result.kopeek = this->kopeek + plusCash.kopeek;
	if (result.kopeek >= MaxKop) {
		result.rubley++;
		result.kopeek -= MaxKop;
	}
	return result;
}

Money Money::operator-(Money & minusCash)
{
	Money result;
	result.rubley = this->rubley - minusCash.rubley;
	result.kopeek = this->kopeek - minusCash.kopeek;
	if (result.kopeek >= MaxKop) {
		result.rubley--;
		result.kopeek = MaxKop;
	}
	return result;
}

Money Money::operator*(int multCash)
{
	Money result;
	long longMult;
	unsigned char resMin;

	result.rubley = this->rubley * multCash;
	result.kopeek = this->kopeek * multCash;

	resMin = result.kopeek / MaxKop;
	result.rubley += (int)resMin;

	while (result.kopeek >= MaxKop)
		result.kopeek -= MaxKop;

	return result;
}

void Money::Result()
{
	cout << this->rubley << " Rubley " << this->kopeek << " Kopeek" << endl;
}

int main()
{
	Money cash1, cash2, plusCash, minusCash, multCash;
	int multValue = 5;

	cash1.set(80, 100);
	cash2.set(35, 20);

	plusCash = cash1 + cash2;
	minusCash = cash1 - cash2;
	multCash = cash1 * multValue;

	plusCash.Result();
	minusCash.Result();
	multCash.Result();
}