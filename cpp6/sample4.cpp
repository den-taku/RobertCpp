#include <iostream>
using namespace std;

int main()
{
  int num ;
  int sum = 0;

  cout << "いくつまでの合計を求めますか？" << endl;

  cin >> num ;

  for(int i=1; i<=num; i++){
    sum += i ;
  }

  cout << "1から" << num << "までの合計値は" << sum << "です。" << endl;

  return 0;
}
