#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("file.txt");
	in.seekg(0, ios::end);
	streampos ps = in.tellg();
	cout << "File size: " << ps << endl;
	in.close();
	return 0;
}
