#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "整数を入力してください。" << endl ;

  cin >> res ;

  switch(res){
    case 1 :
      cout << "1が入力されました。" << endl ;
      break ;
    case 2 :
      cout << "2が入力されました。" << endl ;
      break ;
    default :
      cout << "1か2を入力してください。" << endl ;
      break ;
  }

  return 0 ;
}
