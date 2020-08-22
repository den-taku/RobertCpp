#include <iostream>
using namespace std;

int main()
{
  char res ;

  cout << "あなたは男性ですか？" << endl ;
  cout << "YまたはNを入力してください。" << endl ;

  cin >> res ;

    if (res == 'Y' || res == 'y') {cout << "あなたは男性ですね。" << endl;}
    else if (res == 'N' || res == 'n') {cout << "あなたは女性ですね。" << endl ;}
    else {cout << "YかNを入力してください。" << endl ;}

  return 0 ;
}
