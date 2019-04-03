#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world" << endl;

    int *ptr = new int(9);
    delete ptr;
    //ptr = NULL;
    ptr = new int;


    cout << "default value: " << *ptr << endl;
    return 0;
}