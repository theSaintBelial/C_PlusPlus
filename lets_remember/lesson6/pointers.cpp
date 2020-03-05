
#include <iostream>

using namespace std;

int main()
{
	int *a = new int;
	int *b = new int(5);

	*a = 10;
	*b += *a;
	cout << *b << endl;

	delete a;
	delete b;
	
	return (0);
}