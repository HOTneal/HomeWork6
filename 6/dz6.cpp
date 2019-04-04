// dz6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "book.h"
#include "reader.h"

using namespace std;

book warAndPeace;
book lordOfTheRings;
book harryPotterAndThePhilosophersStone;

reader Ivan;
reader Nikolai;
reader Natasha;

//SettersBook
void book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}
void book::set_year(const int new_year)
{
	this -> year = new_year;
	return;
}

//GettersBook
void book::get_name() {
	cout << ", " << this -> name << endl;
	return;
}


//SettersReader
void reader::set_fio(const char * new_fio)
{
	this -> fio = new_fio;
	return;
}

void reader::set_age(const int new_age)
{
	this -> age = new_age;
	return;
}

void reader::set_current_book(const book new_current_book)
{
	this -> current_book = new_current_book;
	return;
}


//GettersReader
void reader::get_info()
{
	cout << fio;
	current_book.get_name();
	return;
}

void main()
{
	warAndPeace.set_name("War And Peace");
	lordOfTheRings.set_name("Lord Of The Rings");
	harryPotterAndThePhilosophersStone.set_name("Harry Potter And The Philosophers Stone");

	Ivan.set_fio("Ivan");
	Nikolai.set_fio("Nikolai");
	Natasha.set_fio("Natasha");

	Ivan.set_current_book(warAndPeace);
	Nikolai.set_current_book(lordOfTheRings);
	Natasha.set_current_book(harryPotterAndThePhilosophersStone);

	Ivan.get_info();
	Nikolai.get_info();
	Natasha.get_info();
}