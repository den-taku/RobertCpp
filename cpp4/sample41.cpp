#include <iostream>
using namespace std;

int main()
{
  int num1 = 0 ;
  int num2 = 4 ;

  cout << "0-4=" << num1-num2 << endl;

  const double pi = 3.14 ;
  num1 = 2 ;

  cout << "3.14*2=" << pi*(double)num1 <<endl ;

  num1 = num1 = 5 ;
  num2 = 3 ;

  cout << "5/3=" << (double)num1/num2 << endl ;

  num1 = num1 = 30 ;
  num2 = num2 = 7 ;

  cout << "30/7のあまりは" << 30%7 << "です。" << endl ;

  num1 = 32 ;
  int num3 = 5 ;

  cout <<"(7+32)/5=" << (num2+num1)/(double)num3 << endl;

  return 0 ;
}
