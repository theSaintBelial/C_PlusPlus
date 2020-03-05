
#include "students.h"

using namespace std;

int main()
{
	string name;
	string last_name;
	Students student;

	cout << "Enter student's name: ";
	getline(cin, name);

	student.set_name(name);

	cout << "Enter student's last name: ";
	getline(cin, last_name);

	student.set_last_name(last_name);

	int scores[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Score #" << i + 1 << ": ";
		cin >> scores[i];
	}

	student.set_scores(scores);
	student.set_average_score();

	cout << "\nCongrats! Student " << student.get_name() << " " << student.get_last_name() << " has been created!" << endl;
	cout << "His average score: " << student.get_average_score() << endl;

	return (0);
}