#include <iostream>
#include "Customer.h"
using namespace std;

int main()
{
	Customer dan = Customer(50.00, 100.00);


	cout << dan._moneyOnHand << endl;
	cout << dan._accountValue << endl;


	getchar();
	return 0;
}