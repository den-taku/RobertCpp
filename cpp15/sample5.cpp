#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int num;
  vector<int> vt;

  cout << "幾つ整数データを入力しますか?" << endl;
  cin >> num;

  for(int i=0; i<num; i++){
    int data;
    cout << "整数を入力してください。" << endl;
    cin >> data;
    vt.push_back(data);
  }

  cout << "表示します。" << endl;
  vector<int>::iterator it = vt.begin();
  while(it != vt.end()){
    cout << *it;
    cout << "-";
    it++;
  }
  cout << endl;

  return 0;
}
