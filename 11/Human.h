#pragma once
#include <string>
#include "egg.h"

class Human
{
private:
	std::string name;
	int age;

public:
	void init(std::string newName, int newAge);
	std::string getName();
	int getAge();
	void say(std::string text);
	void try_break_egg(egg* some_egg);
};