
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char oper, is_next;
	bool next = true;

	while (next)
	{
		cout << "Enter the first number: ";
		cin >> a;
		cout << "Enter the second number: ";
		cin >> b;
		cout << "Enter the operator: ";
		cin >> oper;
		switch (oper)
		{
		case '+':
			cout << "Sum: " << a + b << endl;
			break;
		case '-':
			cout << "Sub: " << a - b << endl;
			break;
		case '*':
			cout << "Mult: " << a * b << endl;
			break;
		default:
			cout << "There is no such features." << endl;
			break;
		}
		cout << "Do you want to continune? (Y, N): ";
		cin >> is_next;
		next = true ? is_next == 'Y' : false;
		if (next)
			cout << endl;
	}
	
	return (0);
}