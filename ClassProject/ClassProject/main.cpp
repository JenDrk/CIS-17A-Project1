#include <iostream>
#include <vector>
#include "Customer.h"
#include "Bank.h"
#include "Employee.h"
using namespace std;

int main()
{

	Customer dan = Customer(50.00, 100.00);
	Customer bob = Customer(400.32, 1030.54);
	Employee john = Employee("john");
	Employee paul = Employee("paul");
	Bank test = Bank(50000);
	
	//cout << "$" + test.getBalance() << endl;
	test.addEmployee(john, 0);
	test.addEmployee(paul, 1);

	cout << john.GetName() << endl;
	cout << dan._moneyOnHand << endl;
	cout << dan._accountValue << endl;
	cout << bob._moneyOnHand << endl;
	cout << bob._accountValue << endl;


	getchar();
	return 0;
}