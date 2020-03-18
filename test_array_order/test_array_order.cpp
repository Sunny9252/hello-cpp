#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n; // size of the array

    cin >> n; //input array size
    cout << "Size of array: " << n << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[(n - 1) - i] << " ";
    }

    return 0;
}
