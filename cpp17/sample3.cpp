#include <iostream>
using namespace std;

int main()
{
  double pi;

  cout << "円周率の値はいくつですか？" << endl;
  cin >> pi;

  cout << "円周率の値は" << pi << "です。" << endl;

  char a;

  cout << "アルファベットの最初の文字は何ですか？" << endl;
  cin >> a;

  cout << "アルファベットの最初の文字は" << a << "です。" << endl;

  double h, w;

  cout << "身長と体重を入力してください。" << endl;
  cin >> h >> w;

  cout << "身長は" << h << "です。" << endl;
  cout << "体重は" << w << "です。" << endl;

  return 0;
}
