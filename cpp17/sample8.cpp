#include <iostream>
using namespace std;

//ポインタを用いたadd()関数の定義
void add(int* pa, int* pb, int add)
{
  pa += add;
  pb += add;
}

//参照を用いたadd()関数の定義
void add(int& ra, int& rb, int a)
{
  ra += a;
  rb += a;
}

int main()
{
  //ポインタを用いる
  int x1, x2, a;

  cout << "2科目分の点数を入力してください。" << endl;
  cin >> x1 >> x2;

  cout << "加点する点数を入力してください。" << endl;
  cin >> a;

  int *px1 = &x1;
  int *px2 = &x2;

  add(px1, px2, a);

  cout << a << "点加点しましたので" << endl;
  cout << "科目1は" << x1 << "点になりました。" << endl;
  cout << "科目2は" << x2 << "点になりました。" << endl;

  //参照を用いる

  add(x1, x2, a);

  cout << a << "点さらに加点しましたので" << endl;
  cout << "科目1は" << x1 << "点になりました。" << endl;
  cout << "科目2は" << x2 << "点になりました。" << endl;

  return 0;
}
