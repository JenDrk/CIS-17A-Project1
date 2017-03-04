#pragma once
#include "Employee.h"
class Bank
{
private:
	double _totalAmount;
	Employee _employee [5];

public:
	Bank(double totalAmount);
	~Bank();

	bool Bank::addEmployee(Employee newEmployee, int position);
	int getBalance();
};

