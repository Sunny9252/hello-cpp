#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar)
{
    int n = ar.size();
    int temp = 0; //swap

    long long int height = 0; //count the tallest height
    long long int max = 0;

    //sort - descending
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (ar[j] < ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    max = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == max)
        {
            height++;
        }
    }

    cout << "The Tallest height: " << max << endl;
    cout << "Bloew out Candles: " << height << endl;

    return height;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(ar_count);

    for (int i = 0; i < ar_count; i++)
    {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = birthdayCakeCandles(ar);

    fout << result << "\n";

    fout.close();

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