#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 0;

    cout <<"１番目の整数を入力してください。" <<endl;
    cin >> num;
    sum += num;
    cout <<"２番目の整数を入力してください。" <<endl;
    cin >> num;
    sum += num;
    cout <<"３番目の整数を入力してください。" <<endl;
    cin >> num;
    sum += num;

    cout << "３つの整数の合計は" << sum <<"です。" <<endl;

    return 0;
}
