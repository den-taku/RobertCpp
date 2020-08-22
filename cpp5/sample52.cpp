#include <iostream>
using namespace std;

int main()
{
  int res1, res2 ;

  cout << "整数を２つ入力してください。" << endl ;

  cin >> res1 >> res2 ;

  if (res1 == res2){
    cout << "２つの数は同じ値です。" << endl ;
  }

  if (res1 > res2){
    cout << res2 << "より" << res1 << "の方が大きい値です。" << endl ;
  }

  if (res1 < res2){
    cout << res1 <<"より" << res2 << "の方が大きい値です。" << endl;
  }

  return 0 ;
}
