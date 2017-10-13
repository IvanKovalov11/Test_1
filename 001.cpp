#include <string>
#include <iostream>
using namespace std;

int main ()
{ 
    int i, j=0; char st[80];

    for(i=0; i<80; i++)
    {
	cin.get(st[i]);	
	j++;
	if(st[i] == '\n') break;
    }

    for(i=0; i<=j; i++)
    {
	    if(st[i] == ' ') 
	    {
		    cout << "%20";
	    }
	
	    else
	    {
	    	cout << st[i];
	    }
    }
return (0);
}
