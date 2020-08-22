#include <iostream>
using namespace std;

//最大値を返す関数
int max(int x[])
{
  int max = 0;

  for(int i=0; i<5; i++){
    max = (x[i]>max)? x[i] : max ;
  }

  return max;
}
//文字列の長さを求める関数
int length(char* str)
{
    int len = 0;
    
    for(int i=0; str[i]; i++){
        len++;
    }
    
    return len;
}
  //文字列に指定した文字がいくつあるかを調べる関数
int count(char str[], char ch)
{
  int sum = 0;

  for(int i=0; str[i]; i++){
    sum += (str[i]==ch) ? 1 : 0 ;
  }

  return sum;
}

//main関数
int main()
{
  //テストの最大値を求める
  int test[5];

  cout << "テストの点数を入力してください。" << endl;

  for(int i=0; i<5; i++) {
    cin >> test[i];
    }

  cout << "最高点は" << max(test) << "です。" << endl;

  //文字列の長さを求める

  char text[100];

  cout << "文字列を入力してください。(100文字未満、英数字のみ)" << endl;
  cin >> text;

  cout << "文字列の長さは" << length(text) << "です。" << endl;

  //文字列に指定した文字がいくつあるかを調べる
  char st[100];
  char ch;

  cout << "文字列を入力してください。(100文字未満、英数字のみ)" << endl;
  cin >> st;

  cout << "文字列から探す文字を入力してください。" << endl;
  cin >> ch;

  cout << st << "の中に" << ch << "は" << count(st, ch) << "個あります。" << endl;
  
  return 0;
}
