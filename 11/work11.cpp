#include "stdafx.h"
#include <iostream>
#include <string>
#include "egg.h"

using namespace std;

bool breakk(string who)
{
	if (who == "mouse")
		return true;
	else
		return false;
}

void say(string text)
{
	cout << text;
}