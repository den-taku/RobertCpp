#include <iostream>
using namespace std;

int main()
{
  double h ;
  double l ;

  cout << "三角形の高さを入力してください。" << endl ;
  cin >> h ;

  cout << "三角形の底辺を入力してください。" << endl ;
  cin >> l ;

  cout << "三角形の面積は" << h*l/2 << "です。" << endl ;

  return 0 ;
}
