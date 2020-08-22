#include <iostream>
using namespace std;

inline int count(char str[], char ch)
{
  int i = 0;
  int c = 0;
  while(str[i]){
    if(str[i]==ch){
      c++;
    }
    i++;
  }
  return c;
}

int main()
{
  char str[100];
  char cha;

  cout << "文字列(100文字未満)を入力してください。" << endl;
  cin >> str ;

  cout << "文字列から探す文字を入力してください。" << endl;
  cin >> cha;

  cout << str << "のなかに" << cha << "は全部で" << count(str,cha) << "個あります。" << endl;

  return 0;
}
