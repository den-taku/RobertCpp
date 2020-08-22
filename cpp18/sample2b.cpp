//２．
//キーボードから入力した100文字までの不特定数の文字列を
//後に入力した列から順に表示する．

#include <iostream>
using namespace std;

//文字列を何個保存したかカウントするグローバル変数
static int c;

//文字列を何個入力するか決める変数
static int num;

//キーボードから入力した100文字までの文字列を保存する関数
void SaveStrings(char** str);

//保存した文字列を表示する関数delete
void ShowStrings(char** str);

//main関数
int main()
{
  cout << "何個の文字列を入力しますか？ > " << flush;
  cin >> num;

  char** strings = new char*[num];

  for(int i = 0; i < num; i++){
    strings[i] = new char[130];
  }

  //char* strings = new char[num][130]; : ミス

  cout << "100文字までの文字列を" << num << "個入力してください。" << endl;
  cout << "その後、後に入力した文字列から順に表示します。" << endl;

  SaveStrings(strings);
  ShowStrings(strings);

  for(char i = 0; i < num; i++){
    delete[] strings[i];
  }
  delete[] strings;

  //delete[] strings; : ミス

  return 0;
}

void SaveStrings(char** str)
{
  for(int i = 0; i < num ; i++){
    cin >> str[i];
    c ++;
  }
}

void ShowStrings(char** str)
{
  for(int i= c - 1; i >= 0; i--)
  {
    cout << str[i] << endl;
  }
}
