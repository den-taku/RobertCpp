#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int& rA = a;

  cout << "変数aの値は" << a << "です。" << endl;
  cout << "参照rAの値は" << rA << "です。" << endl;

  rA = 50;

  cout << "rAに50を代入しました。" << endl;
  cout << "参照rAの値は" << rA << "に変更されました。" << endl;
  cout << "変数aの値も" << a << "に変更されました。" << endl;
  cout << "変数aのアドレスは" << &a << "です。" << endl;
  cout << "参照rAのアドレスも" << &rA << "です。" << endl;

  return 0;
}
