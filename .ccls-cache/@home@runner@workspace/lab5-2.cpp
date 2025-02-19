//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
	{
		const double Discount_Rate = 0.10;
		const double SHIP_CHG1 = 0.99;
		const double SHIP_CHG2 = 4.99;
		double amtOwed = 0.00;
		char member = ' ';

		std::cout << "Amount owed before any discount and shipping: ";
		std::cin >> amtOwed;
		std::cout << "premier club member (Y/N)?";
		std::cin >> member;


// substract discount, if appropriate

		if (toupper(member) == 'Y')
			amtOwed -= amtOwed * Discount_Rate;
			 //end if
		if (amtOwed >= 100.0)
			 amtOwed += SHIP_CHG1;
		else
			amtOwed += SHIP_CHG2;
		//end if
		std::cout << std::fixed << setprecision(2);
		std::cout << "Amount owed after any discount and shipping: " << amtOwed << std::endl;

	return 0;
}	