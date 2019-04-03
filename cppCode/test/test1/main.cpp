#include <iostream>
#include <string>

using namespace std;

int main()
{
	try
	{
	    int i, j;
	    if (cin >> i >> j) {
		    cout << i << ' ' << j << endl;
    	} else {
    		throw string("error");
    	}
	} catch (string err) {
		cout << err << endl;
	}

	return 0;
}

