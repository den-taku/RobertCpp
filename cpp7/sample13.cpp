#include <iostream>
using namespace std;

//関数テンプレート
template <class T>
T maxt(T x, T y)
{
  if(x > y)
    return x;
  else
    return y;
}

int main()
{
  int a, b;
  double da, db;

  cout << "2つの整数を入力してください。" << endl;
  cin >> a >> b;

  cout << "2つの小数を入力してください。" << endl;
  cin >> da >> db;

  int ans1 = maxt(a,b);
  double ans2 = maxt(da,db);

  cout << "整数値の最大値は" << ans1 << "です。" << endl;
  cout << "小数値の最大値は" << ans2 << "です。" << endl;

  return 0; 
}
