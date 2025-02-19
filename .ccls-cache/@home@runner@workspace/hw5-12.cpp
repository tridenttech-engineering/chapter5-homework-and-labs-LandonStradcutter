
//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price1 = 0.0;
	double price2 = 0.0;
	double total = 0.0;

	cout << "Enter first price: ";
	cin >> price1;
	cout << "Enter second price: ";
	cin >> price2;

	if (price1 >= price2)
		total = price1 + (price2 / 2.0);
	else
		total = price2 + (price1 / 2.0);

	cout << fixed << setprecision(2);
	cout << "Amount owed: $" << total << endl;

	return 0;
}
