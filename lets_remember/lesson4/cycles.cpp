
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	for (int i = 1; i <= 1000; i++)
		sum += i;

	cout << "Sum of the first 1000 nbrs: " << sum << endl;
	
	return (0);
}