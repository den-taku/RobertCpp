#include <iostream>
using namespace std;

//列挙型Weekの宣言
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
  Week w;
  w = SUN;

  switch(w){
    case SUN: cout << "日曜日です。" << endl; break;
    case MON: cout << "月曜日です。" << endl; break;
    case TUE: cout << "火曜日です。" << endl; break;
    case WED: cout << "水曜日です。" << endl; break;
    case THU: cout << "木曜日です。" << endl; break;
    case FRI: cout << "金曜日です。" << endl; break;
    case SAT: cout << "土曜日です。" << endl; break;
    default: cout << "何曜日だかわかりません。" << endl; break;
  }

  return 0;
}
