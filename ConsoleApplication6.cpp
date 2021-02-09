#include <iostream>
#include"factorial.h"
using namespace std;

int main()
{


	int x;
	cout << "Enter positive value: " << endl;
	cin >> x;
	cout << "The factorial of " << x << " is: " << fact(x) << endl;

	return 0;
}