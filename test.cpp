#include <iostream>

using namespace std;

int compare(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int compare3(int a, int b, int c){
    int max;
    if(a>b){
        max = (a > c)? a: c;
    }
    else {
        max = (b > c)? b : c;
    }
    return max;
}

int compare4(int a, int b, int c, int d){
    int max;


    if(a>b){
        if(a>c){
            max = (a>d)?a:d;
        }else if(a<c){
            max = (c>d)?c:d;
        }
    }
    else if(a<b){
        if(b>c){
            max = (b>d)?b:d;
        }else if(b<c){
            max = (c>d)?c:d;
        }        
    }
    return max;
}
int main(){

    int a = 10;
    int b = 15;
    int c = 90;
    int d = 203;
    int result, result2, result4;

    // cout << "숫자 10을 10진수로 표현하면" << a << "이며," << endl;
    // cout << oct;
    // cout << "숫자 10을 8진수로 표현하면" << a << "이며," << endl;
    // cout << hex;
    // cout << "숫자 10을 16진수로 표현하면" << a << "이다." << endl;
    // cout << dec;
    // cout << "10-- + --10은 ? " << (a-- + --a) << "나는 18로 예상합니다." << endl;

    result = compare(a,b);
    cout << "Which one is the bigger: " << result << endl;

    result2 = compare3(a,b,c);
    cout << "Which one is the bigger: " << result2 << endl;

    result4 = compare4(a,b,c,d);
    cout << "Which one is the bigger: " << result4 << endl;
    // int age;
    // cout << "몇살? ";
    // cin >> age;

    // cout << "Hi There !" << age << "살 언니" <<endl;

    return 0;
}