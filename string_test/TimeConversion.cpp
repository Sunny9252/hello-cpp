#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    /*
     * Write your code here.
     */

    stringstream time(s);
    stringstream military;

    char ch;                //seperator, colon
    string clock;           //PM, AM
    int hour, min, sec = 0; //hour

    time >> hour >> ch >> min >> ch >> sec >> clock;

    // cout << "hour: " << hour << endl;
    // cout << "min: " << min << endl;
    // cout << "sec: " << sec << endl;
    // cout << "clock: " << clock << endl;
    // cout << "seperator: " << ch << endl;

    if (clock == "PM")
    {
        hour += 12;
        if (hour == 24)
        {
            hour = 0;
        }
    }

    // military = to_string(hour) + ch + to_string(min) + ch + to_string(sec);

    military << setw(2) << setfill('0') << to_string(hour) << ":"
             << setw(2) << setfill('0') << to_string(min) << ":"
             << setw(2) << setfill('0') << to_string(sec) << endl;

    // cout << "military: " << hour << ":" << min << ":" << sec << endl;

    // cout << setw(2) << setfill('0') << hour << ":"
    //      << setw(2) << setfill('0') << min << ":"
    //      << setw(2) << setfill('0') << sec << endl;

    cout << "conv_military: " << military.str() << endl;

    return military.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
