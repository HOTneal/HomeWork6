#include "pch.h"
#include <iostream>
#include "Fractions.h"

using namespace std;


Fractions::Fractions() :
	numerator(0), denominator(0)
{}

Fractions::Fractions(int _num, int _denom) :
	numerator(_num), denominator(_denom)
{}

Fractions::Fractions(const Fractions& rhs)
{
	this->numerator = rhs.numerator;
	this->denominator = rhs.denominator;
}

void Fractions::SetFraction()
{
	cout << "Enter numerator: ";
	cin >> numerator;

	cout << "Enter denominator: ";
	cin >> denominator;
}

Fractions Fractions::operator+(const Fractions& rhs)
{
	Fractions temp;

	temp.numerator = this->numerator + rhs.numerator;
	temp.denominator = this->denominator + rhs.denominator;

	return temp;
}

Fractions Fractions::operator-(const Fractions& rhs)
{
	Fractions temp;

	temp.numerator = this->numerator - rhs.numerator;
	temp.denominator = this->denominator - rhs.denominator;

	return temp;
}

Fractions Fractions::operator*(const Fractions& rhs)
{
	Fractions temp;

	temp.numerator = this->numerator * rhs.numerator;
	temp.denominator = this->denominator * rhs.denominator;

	return temp;
}

bool Fractions::operator==(const Fractions& rhs)
{
	return ((this->numerator + this->denominator) == (rhs.numerator + rhs.denominator)) ? true : false;
}

void Plus(Fractions Frac1, Fractions Frac2) {

	Fractions Result = Frac1 + Frac2;

	cout << "\nPlus = ";
	Result.GetFraction();
}

void Minus(Fractions Frac1, Fractions Frac2) {

	Fractions Result = Frac1 - Frac2;

	cout << "\nMinus = ";
	Result.GetFraction();
}

void Multiply(Fractions Frac1, Fractions Frac2) {

	Fractions Result = Frac1 * Frac2;

	cout << "\nMultiply = ";
	Result.GetFraction();
}

void Comparison(Fractions Frac1, Fractions Frac2) {

	bool comparison = Frac1 == Frac2;

	cout << "\nComparison = " << comparison << endl;
}

int main()
{
	Fractions Frac1;
	cout << "Fraction1 \n";
	Frac1.SetFraction();

	Fractions Frac2;
	cout << "Fraction2 \n";
	Frac2.SetFraction();

	Plus(Frac1, Frac2); //сложение
	Minus(Frac1, Frac2); //вычитание
	Multiply(Frac1, Frac2); //умножение
	Comparison(Frac1, Frac2); //сравнение
}
