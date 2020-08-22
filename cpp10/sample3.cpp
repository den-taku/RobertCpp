#include <iostream>
using namespace std;

int main()
{
  int* pA;

  pA = new int;

  cout << "動的にメモリを確保しました。" << endl;

  *pA = 10;

  cout << "動的に確保したメモリを使って" << *pA << "を出力しています。" << endl;

  delete pA;

  cout << "確保したメモリを解放しました。" << endl;

  return 0;
}
