#include <iostream>

using namespace std;

int main()
{
	const int Num1 = 1, Num2 = 2;

	cout << "Int Variable Print" << endl;
	cout << Num1 + Num2 << endl;
	cout << Num1 - Num2 << endl;
	cout << Num1 / Num2 << endl;
	cout << Num1 * Num2 << endl;
	cout << Num1 % Num2 << endl;

	const float Num3 = 1.5f, Num4 = 2.5f;
	
	cout << "Float Variable Print" << endl;
	cout << Num3 + Num4 << endl;
	cout << Num3 - Num4 << endl;
	cout << Num3 / Num4 << endl;
	cout << Num3 * Num4 << endl;
			   
	return 0;
}