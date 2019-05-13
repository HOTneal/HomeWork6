#include "pch.h"
#include <iostream>
#include "Animal.h"
#include "Human.h"
#include "egg.h"
#pragma comment (lib, "egg.lib")

using namespace std;

void Animal::setName(std::string newName)
{
	name = newName;
}

string Animal::getName()
{
	return this->name;
}

void Animal::say(std::string text)
{
	cout << text << endl;
}

void Animal::try_break_egg(egg* some_egg)
{
	some_egg->breakk(this->name);
	if (some_egg->breakk(this->name) == true)
		this->say("egg upalo i razbilos");
	else
		this->say("ne razbilos");
}

egg* Animal::create_egg()
{
	egg* retval;
	retval = new egg;
	retval->size = 5;
	retval->weight = 50;
	return retval;
}

void Human::init(std::string newName, int newAge)
{
	name = newName;
	age = newAge;
}

string Human::getName()
{
	return this->name;
}

int Human::getAge()
{
	return this->age;
}

void Human::say(std::string text)
{
	cout << name << " " << text << endl;
}

void Human::try_break_egg(egg* some_egg)
{
	some_egg->breakk(this->name);
	some_egg->say(this->name);

	if (some_egg->breakk(this->name) == true) {
		if (this->name == "Grandpa")
			this->say("razbil");
		if (this->name == "Grandma")
			this->say("razbila");
	} 
	else {
		if (this->name == "Grandpa")
			this->say("ne razbil");
		if (this->name == "Grandma")
			this->say("ne razbila");
	}
}

void egg::say(std::string text)
{
	cout << text << " is trying to break me!" << endl;
}

void main()
{
	Animal mouse, chicken;
	Human grandpa, grandma;
	egg* some_egg;

	mouse.setName("Mouse");
	chicken.setName("Chicken");

	chicken.create_egg();
	some_egg = chicken.create_egg();
	chicken.say(chicken.getName() + " snelsa egg with size " + to_string(some_egg->size) + " and weight " + to_string(some_egg->weight));

	cout << endl;

	grandpa.init("Grandpa", 70);
	grandpa.say("bil bil");
	grandpa.try_break_egg(some_egg);
	
	cout << endl;
	
	grandma.init("Grandma", 60);
	grandma.say("bila bila");
	grandma.try_break_egg(some_egg);

	cout << endl;

	chicken.say(chicken.getName() + " bejala hvostikom mahnula");
	chicken.try_break_egg(some_egg);

	cout << endl;

	mouse.say(mouse.getName()+ " bejala hvostikom mahnula");
	mouse.try_break_egg(some_egg);
}