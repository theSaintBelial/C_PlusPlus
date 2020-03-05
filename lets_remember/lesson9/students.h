#ifndef STUDENTS_H

# define STUDENTS_H

# include <iostream>

using namespace std;

class Students
{
	private:
		float average_score;
		int scores[5];
		string name;
		string last_name;
	public:
		void set_name(string stud_name)
		{
			name = stud_name;
		}

		string get_name()
		{
			return (name);
		}

		void set_last_name(string stud_last_name)
		{
			last_name = stud_last_name;
		}

		string get_last_name()
		{
			return (last_name);
		}

		void set_scores(int stud_scores[])
		{
			for (int i = 0; i < 5; i++)
				scores[i] = stud_scores[i];
		}

		void set_average_score()
		{
			int sum = 0;

			for (int i = 0; i < 5; i++)
				sum += scores[i];
			
			average_score = sum / 5.0;
		}

		float get_average_score()
		{
			return (average_score);
		}
};

#endif