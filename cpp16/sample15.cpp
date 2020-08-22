#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  if(argc != 2){
    cout << "パラメータの数が違います。" << endl;
    return 1;
  }

  ifstream fin(argv[1]);
  if(!fin){
    cout << "ファイルをオープンできませんでした" << endl;
    return 1;
  }

  char ch;
  while(!fin.eof()){
    fin.get(ch);
    cout.put(ch);
  }

  fin.close();

  return 0;
}
