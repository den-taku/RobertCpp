#include <iostream>
using namespace std;

template <class T>
inline T square(T x)
{
  return x*x;
}

int main()
{
  int a;
  long double b;

  cout << "整数を入力してください。" << endl;
  cin >> a;

  cout << a << "の２乗は" << square(a) << "です。" << endl;

  cout << "小数を入力してください。" << endl;
  cin >> b;
  
  cout << b << "の２乗は" << square(b) << "です。" << endl;
 
  return 0;
}
