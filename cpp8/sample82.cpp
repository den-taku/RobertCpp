#include <iostream>
using namespace std;

inline void(int add, int* x)
{
  *x += add;
}

int main()
{
  int a, b, ad;

  cout << "2科目分の点数を入力してください。" << endl;
  cin >> a >> b;

  cout << "加点する点数を入力してください。" << endl;
  cin >> ad;

  add(ad,&a);
  add(ad,&b);

  cout << ad << "点加点しましてので" << endl;
  cout << "科目1は" << a << "点となりました。" << endl;
  cout << "科目2は" << b << "点となりました。" << endl;

  return 0;
}
