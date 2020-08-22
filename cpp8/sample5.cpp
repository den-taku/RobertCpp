#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int* pa = &a;

  cout << "変数aの値は" << a << "です。" << endl;

  *pa = 50;

  cout << "*paに50を代入しました。" << endl;
  cout << "変数aの値は" << a << "です。" << endl;

  return 0;

}
