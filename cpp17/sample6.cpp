#include <iostream>
using namespace std;

int main()
{
  //偶数を表示するプログラム
  cout << "1~10までの偶数を出力します。" << endl;
  for(int i=1; i<=10; i++){
    if(i%2)
      continue;
    else
      cout << i << endl;
  }

  //テストの合計点を出力するプログラム
  int sum = 0;
  int num;

  cout << "テストの点数を入力してください。" << endl;

  do{
    cin >> num;
    sum += num;
  }while(num);

  cout << "テストの合計点は" << sum << "です。" << endl;

  // *
  // **
  // ***
  // ****
  // *****と表示するプログラム

  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      cout << '*';
      if(j==i){
        cout << endl;
        break;
        }
      }
  }
}
