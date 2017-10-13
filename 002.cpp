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

bool decr(int array[10]) 
{
    bool check = true;
    for(int i = 0; i < 10; i++) 
    {
        if (array[i] >= array[i-1]) check=true;
        else {check=false; break;}
    }
    return check;
}

int main()
{
    int num[10];
    int b;
	if (read_numbers(num))
	{
	    if (decr(num))
        {
	        cin >> b;
	        bool stop = true;
		    for (int i = 0; i < 10; ++i)
		    {
		        for (int j = 0; j < 10; ++j)
		        {
		            if (num[i]+num[j] == b)
		            {
		                cout << num[i] << ' ' << num[j] << endl;
		                stop = false;
		            }
    	        }
		    }
		    if (stop) cout << "There is no such pair of numbers" << endl;
        }
        else cout << "The input sequence must be non-decreasing.";
	}	
	else 
	{
		cout<<"An error has occurred while reading the input sequence.";
	}
}
