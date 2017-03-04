#pragma once
#include <string>
class Employee
{
private:
	double mySalary;
	std::string _empName;
public:
	Employee();
	Employee(std::string empName);
	~Employee();

	std::string GetName();
};

