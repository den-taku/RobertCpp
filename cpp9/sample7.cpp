#include <iostream>
using namespace std;

//avg関数

inline double avg(int t[])
{
  double sum = 0;
  for(int i=0; i<5; i++){
    sum += t[i];
  }
  return sum/5;
}

int main()
{
  int test[5];

  cout << "5人のテストの点数を入力してください。" << endl;
  for(int i=0; i<5; i++){
    cin >> test[i];
  }
  double ans = avg(test);
  cout << "5人の平均点は" << ans << "点です。" << endl;

  return 0;
}
