//============================================================================
// Name        : pc410.cpp
// Author      : Jeremy McKay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double discount
		  ,total
		  ,subtotal;

	int quantity;

	cout << "\n   "
		 << "How many items did the customer buy?";

	cin >> quantity;
	if (quantity <= 0)

		cout << "\n   "
			 << "You need to enter a number greater than"
			 << "\n0 please run program again.";

	else if (quantity > 10 || quantity < 19)

		discount = .20;
		else if (quantity > 20 || quantity < 49)
			discount = .30;

		else if (quantity > 50 || quantity < 99)
			discount = .40;
		else
			discount = .50;


		subtotal = quantity * 99;
		total = subtotal - (total *discount);

		cout << total;

	return 0;
}
