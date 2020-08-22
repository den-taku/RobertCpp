#include <iostream>
using namespace std;

int main()
{
  cout << "コンピュータに計算させます。" << endl;

  cout << "0-4=" << 0-4 << endl;
  cout << "3.14×2=" << 3.14*2 << endl;
  cout << "5÷3=" << 5/3 << endl;
  cout << "30÷7のあまりは" << 30%7 << endl;
  cout << "(7+32)÷5=" << (double)(7+32)/5 << endl;

  double num1, num2;

  cout << "三角形の高さを入力してください。" << endl;
  cin >> num1;

  cout << "三角形の底辺を入力してください。" << endl;
  cin >> num2;

  cout << "三角形の面積は" << num1*num2/2 << "です。" << endl;

  int sum = 0;

  for(int i=0; i<5; i++){
    cout << "科目" << i+1 << "の点数を入力してください。" << endl;
    int k;
    cin >> k;
    sum += k;
  }

  cout << "5科目の合計点は" << sum << "です。" << endl;
  cout << "5科目の平均は" << (double)sum/5 << "です。" << endl;

  return 0;
}
