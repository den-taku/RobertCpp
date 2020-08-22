#include <iostream>
using namespace std;

int main()
{
  double dnum = 160.5 ;
  int inum ;

  cout << "身長は" << dnum << "センチです。" << endl ;
  cout << "int型の変数に代入します。" << endl ;

  inum = (int)dnum ;

  cout << "身長は" << inum <<"センチです。" << endl ;

  return 0 ;
}
