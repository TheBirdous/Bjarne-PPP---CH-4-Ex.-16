#include "../../std_lib_facilities.h"

string get_mode(vector<string> set)
{
	sort(set);
	int tracker = 1;
	int most_reocc = tracker;
	string most_reocc_string = " ";
	vector<int> set_MC;

	for (int i = 1; i < set.size(); i++)
	{
		if (set[i] == set[i - 1])
		{
			++tracker;
		}
		else if (set[i] != set[i - 1])
		{
			tracker = 1;
		}
		if (tracker > most_reocc)
		{
			most_reocc = tracker;
			most_reocc_string = set[i];
		}
	}
	
	cout << "The string has reoccoured most (" << most_reocc << ") times, is: ";
	return most_reocc_string; 
	
}





int main()
{
	vector<string> strings;
	string input = " ";
	string biggest = " ";
	string smallest = " ";
	bool is_first = true;
	while (cin >> input)
	{
		if (input < smallest || is_first == true)
		{
			smallest = input;
		}
		if (input > biggest || is_first == true)
		{
			biggest = input;
		}
		is_first = false;
		strings.push_back(input);

	}

	cout << get_mode(strings) << '\n';
	cout << "The biggest string entered is: " << biggest << '\n';
	cout << "The smallest string entered is: " << smallest << '\n';
	keep_window_open();
}