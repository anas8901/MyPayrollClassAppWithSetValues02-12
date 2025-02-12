#include "Payrolls.h" 



Payroll::Payroll(int id, string n, double h, double pr)

{

	this->EmpID = id;

	this->EmpFullName = n;

	this->HoursWorked = h;

	this->PayRate = pr;

}

Payroll::Payroll()
{

}

void Payroll::setValues(int id, string n, double h, double pr)

{

	this->EmpID = id;

	this->EmpFullName = n;

	this->HoursWorked = h;

	this->PayRate = pr;
}



string Payroll::getFullName()

{

	return this->EmpFullName;

}



double Payroll::getPayment()

{

	return this->Payment;

}



int Payroll::getID()

{

	return this->EmpID;

}



double Payroll::getHours()

{

	return this->HoursWorked;

}



double Payroll::getPayRate()

{

	return this->PayRate;

}