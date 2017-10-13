#include <iostream>
#include <sstream>
using namespace std;

bool read_numbers(int array[10])
{
	string string;
	getline(cin, string);
	istringstream stream(string);
	bool success = true;
	for (int i = 0; i < 10; ++i) {
		if (!(stream >> array[i])) {
			success = false;
			break;
		}
	}

	return success;
}

int main()
{
    int num[10];
    int b;
	if (read_numbers(num))
	{
	    cin >> b;
		for (int i = 0; i < 10; ++i)
		{
		    for (int j = 0; j < 10; ++j)
		    {
		        if (num[i]+num[j] == b)
		        {
		            cout << num[i] << ' ' << num[j] << endl;
		        }
		    }
		}
	}
	
	else 
	{
		cout << "An error has occurred while reading numbers";
	}
	return 0;
}
