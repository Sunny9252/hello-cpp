#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr)
{
    int plus = 0;  //positive numbers
    int minus = 0; //negative numbers
    int zero = 0;  //zero numbers

    float plus_fraction = 0.000000;
    float minus_fraction = 0.000000;
    float zero_fraction = 0.000000;

    float n = arr.size();

    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
    }

    cout << plus << endl;
    cout << minus << endl;
    cout << zero << endl;

    plus_fraction = plus / n;
    minus_fraction = minus / n;
    zero_fraction = zero / n;

    cout.precision(7);
    cout << plus_fraction << endl;
    cout << minus_fraction << endl;
    cout << zero_fraction << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
