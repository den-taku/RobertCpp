#include <iostream>
using namespace std;

inline int length(char* str)
{
  int l = 0;

  for(int i=0; str[i]!='\0'; i++){
    l++;
  }

  return l;
}

int main()
{
  char str[100];

  cout << "文字列(英数字,100文字未満)を入力してください。" << endl;
  cin >> str;

  cout << "文字列の長さは" << length(str) << "です。" << endl;

  return 0;
}
