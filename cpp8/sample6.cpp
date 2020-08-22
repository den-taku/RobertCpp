#include <iostream>
using namespace std;

//swap関数の宣言
void swap(int x, int y);

int main()
{
  int num1 = 5;
  int num2 = 10;

  cout << "変数num1の値は" << num1 << "です。" << endl;
  cout << "変数num2の値は" << num2 << "です。" << endl;
  cout << "変数num1と変数num2の値を交換します。" << endl;

  swap(num1,num2);

  cout << "変数num1の値は" << num1 << "です。" << endl;
  cout << "変数num2の値は" << num2 << "です。" << endl;

  return 0;
}

//誤ったswap関数の定義
void swap(int x, int y)
{
  int tmp;

  tmp = x;
  x = y;
  y = tmp;
}
