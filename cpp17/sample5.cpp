#include <iostream>
using namespace std;

int main()
{
  int n1, n2;

  //偶奇の判断をするプログラム
  cout << "整数を入力してください。" << endl;
  cin >> n1;
    
  cout << n1 << "は" << (n1%2) ? "奇数" : "偶数" << "です。" << endl;

  //2数の大小比較をするプログラム
  cout << "2つの整数を入力してください。" << endl;
  cin >> n1 >> n2 ;

  if(n1 == n2){
    cout << "2つの数は同じ値です。" << endl;
  }
  else if(n1 > n2){
    cout << n2 << "より" << n1 << "の方が大きいです。" << endl;
  }
  else{
    cout << n1 << "より" << n2 << "の方が大きいです。" << endl;
  }

  //成績に応じたメッセージを表示するプログラム
  cout << "成績を5段階評価で入力してください。" << endl;
  cin >> n1;

  cout << "成績は" << n1 << "です。" << endl;
  switch(n1){
    case 1:
      cout << "もっとがんばりましょう。" << endl;
      break;
    case 2:
      cout << "もう少しがんばりましょう。" << endl;
      break;
    case 3:
      cout << "さらに上を目指しましょう。" << endl;
      break;
    case4:
      cout << "大変よくできました。" << endl;
      break;
    case5:
      cout << "大変優秀です。" << endl;
      break;
  }

  return 0;
}
