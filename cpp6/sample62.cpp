#include <iostream>
using namespace std;

int main()
{
  cout << "テストの点数を入力してください。" << endl ;
  cout << "0を入力すると合計点が表示されます。" << endl ;

  int res ;
  int sum ;

  do{
    cin >>res ;
    sum += res ;
    }while(res);

  cout << "テストの合計点は" << sum << "です。" << endl ;

  return 0 ;

}
