#pragma once
#include <string>
class Register
{
private:
	double _totalInReg;
	double _totalTwenties;
	double _totalTens;
	double _totalFives;
	double _totalOnes;
	std::string _numRegister;
public:
	Register(double totalInReg, double totalTwenties, double totalTens, double totalFives, double Ones, std::string numRegister);
	~Register();
};

