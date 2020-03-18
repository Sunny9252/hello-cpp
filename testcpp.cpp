#include <iostream>

using namespace std;

int main()
{
    string sharp = "#";

    cout << "Hi There !" << endl;

    int num1 = 10;

    int num2 = 4;

    cout << "+ 연산자에 의한 결괏값은 " << num1 + num2 << "입니다." << endl;
    cout << "- 연산자에 의한 결괏값은 " << num1 - num2 << "입니다." << endl;
    cout << "* 연산자에 의한 결괏값은 " << num1 * num2 << "입니다." << endl;
    cout << "/ 연산자에 의한 결괏값은 " << num1 / num2 << "입니다." << endl;
    cout << "% 연산자에 의한 결괏값은 " << num1 % num2 << "입니다.";

    for (int i = 0; i < num2; i++)
    {
        sharp += sharp;
        cout << sharp << endl;
    }

    return 0;
}
