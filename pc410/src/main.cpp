//============================================================================
// PC 4.10 - Software Sales
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 26, 2012
// -------------------------
// This program determine the discount on bulk sales when given a quantity
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double discount = 0.0
		  ,total
		  ,subtotal;

	int quantity;
	cout << "\n   "
		 << "Software Sales."
		 << "\n  "
		 << "-----------------";

	cout << "\n   "
		 << "How many items did the customer buy? ";

	cin >> quantity;
	if (quantity > 0)
	{
		 if (quantity > 0 && quantity < 10)
			 	 discount = .00;
		 else if (quantity > 10 && quantity < 19)
			 	 discount = .20;
		 else if (quantity > 20 && quantity < 49)
			 	 discount = .30;
		 else if (quantity > 50 && quantity < 99)
			 	 discount = .40;
		 else
			 	 discount = .50;

		subtotal = quantity * 99;
		discount *= subtotal;
		total = subtotal - discount;
		cout << setprecision(2) << fixed;
		cout << "\n   "
			 << "The total cost of this purchase is $"
			 << total << endl;
	}
		else
		{
			cout << "\n   "
				 << "You need to enter a quantity greater\n"
				 << "   "
				 << "than 0 please rerun the program.";
		}

	return 0;
}
