class Department;
#pragma once
#include <string>
#include "Employee.h"

class Department
{
private:
	std::string name;
	Employee * head;
public:
	void setName(std::string newName);
	std::string getName();
	void setHead(Employee* newHead);
	Employee * getHead();
	void print();
};

