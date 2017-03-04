#include "Bank.h"
using namespace std;


Bank::Bank(double totalAmount) : _totalAmount(totalAmount)
{
}


Bank::~Bank()
{
}

int Bank::getBalance()
{
	return _totalAmount;
}

bool Bank::addEmployee(Employee newEmployee, int position)
{
	if (position <= 4 && _employee[position].GetName() == "Null")
	{
		_employee[position] = newEmployee;
		return true;
	}
	return false;
}