#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "整数を入力してください。" << endl ;

  cin >> res ;

    res = res%2 ;

  if (res == 0){
    cout << "偶数が入力されました。" << endl ;
  }
  else{
    cout << "奇数が入力されました。" << endl ;
  }

  return 0 ;
}
