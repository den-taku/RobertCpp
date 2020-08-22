#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "整数を入力してください。" << endl ;

  cin >> res ;

  if (res == 1){
    cout << "１が入力されました。" << endl ;
  }
  else if (res == 2){
    cout << "2が入力されました。" << endl ;
  }
  else{
    cout << "1か2を入力してください。" << endl ;
  }

  return 0 ;
}
