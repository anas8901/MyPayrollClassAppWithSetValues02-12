#pragma once 

#include <iostream> 

using namespace std;



class Payroll

{

private:  // - is private

	int EmpID;

	string EmpFullName;

	double HoursWorked;

	double PayRate;

	double Payment;

public: //+ is public

	Payroll(int, string, double, double);

	Payroll();

	void setValues(int, string, double, double);

	void CalcPay();

	string getFullName();

	double getPayment();

	int getID();

	double getHours();

	double getPayRate();

};