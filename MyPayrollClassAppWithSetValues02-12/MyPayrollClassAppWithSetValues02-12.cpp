#include "Payrolls.h" //#include "Payrolls.h": Includes the header file Payrolls.h, which contains the declaration of the Payroll class. This allows us to use the Payroll class in this file.

#include <string> //#include <string>: Includes the <string> library, which is required to use std::string.



int main() //The main() function is where the program begins execution.


{

	int id; //id: The employee's ID (integer)

	string name; //name: The employee's full name (string).

	double h; //h: The number of hours worked by the employee (double).

	double pr; //pr: The pay rate per hour for the employee (double).

	cout << "Enter Employee ID => "; //Prompts the user to enter an employee ID and stores it in the variable id.


	cin >> id;

	cout << "Enter Employee Name ==> ";

	cin.ignore();  //clear the buffer from the two spaces above 

	getline(cin, name);

	cout << "Enter Hours Worked ==> ";

	cin >> h;

	cout << "Enter Pay Rate ==> ";

	cin >> pr;

	Payroll gust;
	gust.setValues(id, name, h, pr);
	gust.CalcPay();

	cout << "\n\nEmployee ID ==> " << gust.getID() << endl;

	cout << "Employee Name ==> " << gust.getFullName() << endl;

	cout << "Your payment is ==> " << gust.getPayment() << endl;

}