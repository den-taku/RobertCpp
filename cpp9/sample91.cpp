#include <iostream>
using namespace std;

inline int max(int test[])
{
  int max = *test;

  for(int i=1; i<5; i++){
    if(max<test[i])
      max = test[i];
  }

  return max;
  }

int main()
{
  int t[5];

  cout << "テストの点数を入力してください。" << endl;
  for(int j=0; j<5; j++){
    cin >> t[j] ;
  }

  cout << "最高点は" << max(t) << "です。" << endl;
}
