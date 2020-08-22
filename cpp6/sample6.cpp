#include <iostream>
using namespace std ;

int main()
{
  int num = 1 ;

  while(num){
    cout << "整数を入力してください。(0で終了) " << endl ;
    cin >> num ;
    cout << num << "が入力されました。" << endl ;
  }

  cout << "繰り返しが終わりました。" << endl ;

  return 0;
}
