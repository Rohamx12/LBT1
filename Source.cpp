#include <iostream>
#include <sstream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, d, e, s, x;
	
	cout << "We're gonna calculate the amount of money that you earned this week\nPlus $200 which you will get weekly.\n";
	cout << "=========================================\n";
	cout << "List of items:\n";
	cout << "1. Item 1= ($299.99)\n2. Item 2= ($89.75)\n3. Item 3= ($189.95)\n4. Item 4= ($150.89)\n5. Item 5= ($429.45)\n";
	cout << "=========================================\n";
	cout << "How many units of item 1 did you sell?";
		cin >> a; 
		cout << "How many units of item 2 did you sell?";
		cin >> b;
		cout << "How many units of item 3 did you sell?";
		cin >> c;
		cout << "How many units of item 4 did you sell?";
		cin >> d;
		cout << "How many units of item 5 did you sell?";
		cin >> e;
		if (a >= 0)
		{
			a = 299.99 * a;
		}
		else cout << "Error 404 item1: the number is invalid\n"; // Invalid numbers won't stop the program they'll simply be ignored by it
		if (b >= 0)
		{
			b = 89.75 * b;
		}
		else cout << "Error 404 item2: the number is invalid\n";
		 if (c >= 0)
		{
			c = 189.95 * c;
		}
		 else cout << "Error 404 item3: the number is invalid\n";
		 if (d >= 0)
		{
			d = 150.89 * d;
		}
		 else cout << "Error 404 item4: the number is invalid\n";
		 if (e >= 0)
		{
			e = 429.45 * e;
		}
		 else cout << "Error 404 item5: the number is invalid\n";
		s = (a + b + c + d + e);
		x = (s * 0.09);
		double z = (x + 200);
		cout << "=========================================\n";
		cout << fixed << showpoint << setprecision(2);
		cout << "Your earning is $" << z << " dollar\n";
		cout << "=========================================\n";
		return 0;
}