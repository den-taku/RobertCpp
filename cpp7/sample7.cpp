#include <iostream>
using namespace std;

int sum(int x, int y)
{
  return x+y ;
}

int main()
{
  int num1, num2, ans ;

  cout << "1番目の整数を入力してください。" << endl ;
  cin >> num1 ;

  cout << "2番目の整数を入力してください。" << endl ;
  cin >> num2 ;

  ans = sum(num1,num2);

  cout << "合計は" << ans << "です。" << endl ;

  return 0 ;
}
