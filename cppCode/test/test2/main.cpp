#include <iostream>

using namespace std;

int main()
{
	try
	{
		double *ptr = new double[100000];
	}
	catch(bad_alloc &memExp)
	{
		cerr << memExp.what() << endl;
	}

	return 0;
}
