#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "整数を入力してください。" << endl ;

  cin >> res ;

  if (res == 1){
    cout << "1が入力されました。" << endl ;
    cout << "1を選択しました。" << endl ;
  }

  cout << "処理を終了します。" << endl ;

  return 0 ;
}
