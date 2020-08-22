#include <iostream>
using namespace std;

int main()
{
    int num1 = 2;
    int num2 = 3;
    int sum = num1+num2;

    cout << "変数num1の値は" << num1 <<"です。" <<endl;
    cout << "変数num2の値は" << num2 <<"です。" <<endl;
    cout << "num1+num2の値は" << sum <<"です。" <<endl;

    num1 = num1+1;

    cout <<"変数num1の値に１を足すと" << num1 <<"です。" <<endl;

    return 0;
}
