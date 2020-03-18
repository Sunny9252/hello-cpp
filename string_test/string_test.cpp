#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // Complete the program
    string sharp = "#";
    string space = "!";
    string strnew;
    strnew = sharp + space;
    cout << strnew << endl;

    int i = 5;
    cout.precision(2);
    cout << i << endl;
    cout << "dec= " << dec << i << endl; // 10진 지정

    // string input;
    // for (int i = 0; i < 3; i++)
    // {
    //     getline(cin, input);
    //     stringstream ss(input);

    //     string v;
    //     while ((ss >> v))
    //     {
    //         cout << v << endl;
    //     }
    //     cout << endl;
    // }

    // string a, b;      //string input respectively
    // int len_a, len_b; //lenght of each strings
    // char temp;

    // cin >> a;
    // cin >> b;

    // len_a = a.size();
    // len_b = b.size();

    // cout << len_a << " " << len_b << endl; //size
    // cout << a + b << endl;                 //string a+b

    // temp = a[0];
    // a[0] = b[0]; //swap for a
    // b[0] = temp; //swap for b

    // cout << a << " " << b << endl;

    return 0;
}