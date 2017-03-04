#include "Employee.h"
using namespace std;


Employee::Employee()
{
	_empName = "Null";
}

Employee::Employee(string empName) : _empName(empName)
{
	_empName = empName;
}

Employee::~Employee()
{
}

std::string Employee::GetName()
{
	return _empName;
}