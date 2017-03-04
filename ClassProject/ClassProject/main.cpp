#include <iostream>
#include "Customer.h"
#include "Bank.h"
#include "Employee.h"
#include "Register.h"
using namespace std;

int main()
{

	Customer dan = Customer(50.00, 100.00);
	Customer bob = Customer(400.32, 1030.54);
	Employee john = Employee("john");
	Employee paul = Employee("paul");
	Bank test = Bank(50000);
	Register one = Register(400, 10, 10, 15, 15, "One");
	Register two = Register(200, 5, 5, 5, 15, "Two");

	//cout << "$" + test.getBalance() << endl;
	test.addEmployee(john, 0);
	test.addEmployee(paul, 1);

	getchar();
	return 0;
}