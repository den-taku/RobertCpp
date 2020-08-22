#include <iostream>
using namespace std;

//square関数の定義
template <class T>
inline T square(T x)
{
  cout << x << "の二乗は" << x*x << "です。" << endl;
  return x*x;
}

//square関数の使用
int main()
{
  int x;
  double y;

  cout << "整数を入力してください。" << endl;
  cin >> x;

  square(x);

  cout << "少数を入力してください。" << endl;
  cin >> y;

  square(y);

  return 0;
}
