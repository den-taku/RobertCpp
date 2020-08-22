#include <iostream>
using namespace std ;

int main()
{
  int res ;
  char ans ;

  cout << "何番目のコースにしますか？" << endl ;
  cout << "整数を入力してください。" << endl ;

  cin >> res ;

  ans = (res == 1) ? 'A' : 'B' ;

  cout << ans << "コースを選択しました。" << endl ;

  return 0 ;
}
