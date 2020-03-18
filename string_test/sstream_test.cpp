#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    stringstream ss("23,4,56");
    string plusstring;
    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c; // a = 23, b = 4, c = 56

    cout << a << endl;

    return 0;
}