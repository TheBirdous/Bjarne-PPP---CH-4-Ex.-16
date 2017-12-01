#include "../../std_lib_facilities.h"

int get_mode(vector<int> set)
{
	sort(set);
	int tracker = 1;
	int most_reocc = tracker;
	int most_reocc_num = tracker;

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
			most_reocc_num = set[i];
			most_reocc = tracker;
		}

	}
	
	cout << "The number has reoccoured most (" << most_reocc << ") times, is: ";
	return most_reocc_num; 
	
}





int main()
{
	vector<int> numbers;
	int input = 0;

	while (cin >> input)
	{
		numbers.push_back(input);
	}

	cout << get_mode(numbers) << '\n';

	keep_window_open();
}