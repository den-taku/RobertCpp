#include <iostream>
using namespace std;

int main()
{
  int a;
  int* pa;

  a = 5;
  pa = &a;

  cout << "変数aの値は" << a << "です。" << endl;
  cout << "変数aのアドレスは" << &a << "です。" << endl;
  cout << "ポインタpaの値は" << pa << "です。" << endl;
  cout << "*paの値は" << *pa << "です。" << endl;

  return 0;
}
