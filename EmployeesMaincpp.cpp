#include "Employee.h"
#include"ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool quit = false;
	char command;
	string name, date;
	int shift, numEmployees = 0;
	double rate;
	ProductionWorker newEmployees[100];

	while (!quit)
	{
		cout << "Enter command (or \'h\' for help): ";
		cin >> command; cin.ignore(80, '\n');

		switch (command)
		{
		case 'c':
			cout << "Enter name of new employee: ";
			getline(cin, name);
			cout << "Enter hire date of new employee: ";
			getline(cin, date);
			cout << "Enter shift for new employee (1=day, 2=night): ";
			cin >> shift;
			cout << "Enter hourl pay rate for new employee: ";
			cin >> rate;
			
			newEmployees[numEmployees].setEmployeeName(name);
			newEmployees[numEmployees].setHireDate(date);
			newEmployees[numEmployees].setHourlyPayRate(rate);
			newEmployees[numEmployees].setShift(shift);

			break;
		case 'h':
			cout 
				<< "Supported commands: " << endl
				<< "        c               create a new ProductionWorker object." << endl
				<< "        h               print help text" << endl
				<< "        p               print ProductionWorker information" << endl
				<< "        q               quit" << endl;
			break;
		case'p':
			cout
				<< "Name: " << newEmployees[numEmployees].getEmployeeName() << endl
				<< "Employee Number: " << newEmployees[numEmployees].getEmployeeNumber() << endl
				<< "Hire date: " << newEmployees[numEmployees].getHireDate() << endl
				<< "Shift: " << (newEmployees[numEmployees].getShift() == 1 ? "Day" : "Night") << endl
				<< "Shift Number: " << newEmployees[numEmployees].getShift() << endl
				<< "Pay rate: " << newEmployees[numEmployees].getHourlyPayRate() << endl;

			numEmployees++;
			break;
		case 'q':
			quit = true;
			break;
		default:
			cout << "unsupported command." << endl;
		}

		
	}
	return 0;
}