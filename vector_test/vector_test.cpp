#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    /*  ------------ Change Order ------------ */

    // for (int i = 0; i < n; i++)
    // {
    //     vec2.push_back(vec1[(n - 1) - i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << vec2[i] << " ";
    // }

    /* ------------ Basic ------------ */

    // int n;
    // cin >> n;
    // vector<int> vec(n);

    // for (int i = 0; i < n; i++)
    //     cin >> vec[i];

    // for (int i = 0; i < n; i++)
    //     cout << "Input: " << vec[i] << " ";

    /* ------------ Vector Input ------------ */

    // int n;
    // cin >> n;
    // vector<int> vec(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // sort(vec.begin(), vec.end());

    // for (int i = 0; i < n; i++)
    //     cout << vec[i] << " ";

    vector<int> v;
    int size;
    cin >> size;
    int a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
