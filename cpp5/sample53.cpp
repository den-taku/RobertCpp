#include <iostream>
using namespace std;

int main()
{
  int res ;

  cout << "成績を5段階評価で入力してください。" << endl ;

  cin >> res ;

  switch(res){
    case 1:
      cout << "成績は1です。もっとがんばりましょう。" << endl ;
      break ;
    case 2:
      cout << "成績は2です。もう少し頑張りましょう。" << endl ;
      break ;
    case 3:
      cout << "成績は3です。さらに上を目指しましょう。" << endl ;
      break ;
    case 4:
      cout << "成績は4です。大変よくできました。" << endl ;
      break ;
    case 5:
      cout << "成績は5です。大変優秀です。" << endl ;
      break ;
    default:
      cout << "成績は5段階で評価してください。" << endl ;
      break ;
  }

  return 0;
}
