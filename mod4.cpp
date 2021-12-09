#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double hrwrked, payrate, othrs;

	int *OT = new int();
	int *pay = new int();
	int *hrs = new int();

	cout << "Enter Hours Worked Up To 40 Hours: ";
	cin >> hrwrked;
	cout << "Enter Hourly Pay Rate: ";
	cin >> payrate;
	cout << "Enter Total Hours Worked Over 40 Hours: ";
	cin >> othrs;
	cout << endl;

	double totalpay = hrwrked * payrate + (othrs * (payrate * 1.5));

	OT = (int*)&othrs;
	pay = (int*)&payrate;
	hrs = (int*)&hrwrked;

	cout << setw(10);
	cout << setprecision(6) << "Total Pay: " << totalpay;

	cout << endl << "Hours Under 40: " << hrwrked << endl;
	cout << "Pay Rate: " << payrate << endl;
	cout << "OT Hours: " << othrs << endl;
	cout << "---Pointer Values---" << endl;
	cout << "Hours: " << hrs << endl;
	cout << "Pay Rate: " << pay << endl;
	cout << "OT Hours: " << OT << endl;


	delete OT;
	delete pay;
	delete hrs;

	return 0;
}


