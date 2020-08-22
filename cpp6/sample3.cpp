#include <iostream>
using namespace std;

int main()
{
  int num ;

  cout << "いくつ＊を出力しますか？" << endl ;

  cin >> num ;

  for(int i; i<=num; i++){
    cout << '*' ;
  }

  cout << endl;

  return 0 ;
}
