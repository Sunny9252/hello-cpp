#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n)
{
    string sharp = "#";
    string space = " ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << space;
        }
        cout << sharp << endl;
        sharp += "#";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

/* ----------------------------- Answer -------------------------------*/
// #include<iostream>

// using namespace std;

// int main () {
//     int height;
//     cin >> height;

//     for (int i = 1; i <= height; i++) {
//         for (int j = 0; j < i; j++) {
//             if(j==0) {
//                 //Printing spaces
//                 for(int t = 0; t < height - i; t++) cout << " ";
//             }
//             //Print hashes
//             cout << "#";
//         }
//         cout << endl;
//     }
//     return 0;
// }