#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  ofstream fout("test2.txt");
  if(!fout){
    cout << "ファイルをオープンできませんでした" << endl;
    return 1;
  }

  const int num = 5;
  int test[num];
  cout << num << "人のテストの点数を入力してください。" << endl;
  for(int i=0; i<num; i++){
    cin >> test[i];
  }

  for(int j=0; j<num; j++){
    fout << "No." << j+1 << setw(5) << test[j] << endl;
  }

  fout.close();

  return 0;
}
