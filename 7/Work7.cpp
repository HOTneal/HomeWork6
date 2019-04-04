// Work7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Mage.h"
#include "Spell.h"

using namespace std;



void Mage::init(int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}

string Mage::getname()
{
	return this->name;
}

void Mage::say(std:: string text)
{
	cout << this->name << " says " << text << endl << endl;
}

int Mage::cast(Spell &spl, Mage &target)
{
	if (hp>0)
	{
		cout << this->name << " hit with " << spl.name << " our enemy " << target.getname() << endl << endl;
		target.hit(spl);	
	}

	else
	{
		this->say("I'm is dead");
	}
	return 0;
}

void Mage::hit(Spell &spl)
{
	this->hp -=spl.dhp;
	this->mp -=spl.dmp;
	if (hp <= 0)
	{
		this->say(" i am loser");
	}
}


void main()
{
	Mage Ivan;
	Mage Boris;
	Spell bolt;
	Spell drain;
	
	bolt.name = "Bolt";
	bolt.dhp = 50;
	bolt.dmp = 0;

	drain.name = "Drain";
	drain.dhp = 5;
	drain.dmp = 30;

	Ivan.init(100,100,"Ivan");
	Ivan.say("Privet");

	Boris.init(100,100,"Boris");
	Boris.say("Stop, I'm frendly");


	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

		Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);
}