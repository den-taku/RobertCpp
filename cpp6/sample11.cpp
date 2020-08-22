#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "成績を入力してください。" << endl ;

  cin >> res ;

  switch(res){
    case 1:
    case 2:
      cout << "もう少し頑張りましょう。" << endl ;
      break;
    case 3:
    case 4:
      cout << "この調子で頑張りましょう。" << endl ;
      break;
    case 5:
      cout << "大変優秀です。" << endl;
      break;
  }

  return 0 ;
}
