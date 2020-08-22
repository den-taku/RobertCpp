#include <iostream>
using namespace std;

int main ()
{
  int res ;

  cout << "整数を入力してください。" << endl ;

  cin >> res ;

  if (res == 1){
    cout << "1が入力されました。" << endl ;
  }
  else{
    cout << "1以外が入力されました。" << endl ;
  }

  return 0 ;
}
