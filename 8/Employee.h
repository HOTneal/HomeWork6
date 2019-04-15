class Employee;
#pragma once;
#include <string>
#include "idCard.h"
#include "Department.h"

class Employee
{
private:
	std::string name;
	std::string position;
	idCard* card;
	int room;
	Department* department;
public:
	void setName(std::string newName);
	std::string getName();
	void setPosition(std::string newPosition);
	std::string getPositon();
	void setIdCard(idCard* newIdCard);
	idCard* getIdCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(Department *newDepartment);
	Department* getDepartment();
	void print();
};

