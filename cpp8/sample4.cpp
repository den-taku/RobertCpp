#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 10;
  int* pa;

  pa = &a;

  cout << "変数aの値は" << a << "です。" << endl;
  cout << "ポインタpaの値は" << pa << "です。" << endl;
  cout << "*paの値は" << *pa << "です。" << endl;

  pa = &b;

  cout << "変数bの値は" << b << "です。" << endl;
  cout << "ポインタpaの値は" << pa << "に変更されました。" << endl;
  cout << "*paの値は" << *pa << "です。" << endl;

  return 0;
}
