#include <iostream>
using namespace std;

void buy(int x, int y)
{
  cout << x << "万円と" << y << "万円の車を買いました。" << endl;
}

int main()
{
  int num1, num2 ;

  cout << "いくらの車を買いますか？" << endl;
  cin >> num1;

  cout << "いくらの車を買いますか？" << endl;
  cin >> num2;

  buy(num1,num2);

  return 0;
}
