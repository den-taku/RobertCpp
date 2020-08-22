#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

int main()
{
  int a, b;
  double da, db;

  cout << "2つの整数を入力してください。" << endl;
  cin >> a >> b;

  cout << "2つの小数を入力してください。" << endl;
  cin >> da >> db;

  int ans1 = max(a,b);
  double ans2 = max(da, db);

  cout << "整数値の最大値は" << ans1 << "です。" << endl;
  cout << "小数値の最大値は" << ans2 << "です。" << endl;

  return 0;
}

int max(int x, int y)
{
  if(x > y)
    return x;
  else
    return y;
}

double max(double x, double y)
{
  if(x > y)
    return x;
  else
    return y;
}
