#include <iostream>
using namespace std;

inline int add(int add, int& x)
{
  return x += add;
}

int main()
{
  int num1, num2;

  cout << "2科目分の点数を入力してください。" << endl;
  cin >> num1 >> num2;

  int ad;

  cout << "加点する点数を入力してください。" << endl;
  cin >> ad;

  cout << ad << "点加点しましたので" << endl;
  cout << "科目1は" << add(ad,num1) << "点になりました。" << endl;
  cout << "科目2は" << add(ad,num2) << "点にまりました。" << endl;

  return 0;
}
