//２．
//キーボードから入力した100文字までの不特定数の文字列を
//後に入力した列から順に表示する．

#include <iostream>
#include <string>
using namespace std;

// 何個の文字列を入力するかたずねる関数
int Ask()
{
  int num;
  cout << "何個の文字列を入力しますか？" << endl;
  cin >> num;
  return num;
}

//キーボードから入力された100文字までの文字列の保存・表示をするクラス
class Strings{
  private:
    int m_sum; // 文字列の総数(予定)
    int m_count; // 実際の数
    char** m_array; // 文字列の配列

  public:
    Strings(int num);
    virtual ~Strings();
    void Input(); // 文字列の保存
    void Output(); // 文字列の表示
};

Strings::Strings(int num)
{
  m_sum = num;
  m_count = 0;
  m_array = new char*[m_sum];
}

Strings::~Strings()
{
  delete[] m_array;
}

void Strings::Input()
{
  string line;

  cout << "100文字までの文字列を" << m_sum << "個入力してください。" << endl << "Quitと入力すると、入力を終了します。" << endl;
  for(; m_count < m_sum; m_count++){
    getline(cin, line);
    m_array[m_count] = const_cast<char*>(line.c_str());
    if(line == "Quit"){
      break;
    }
    line.clear();
  }
}

void Strings::Output()
{
  cout << "入力した文字列を、後に入力したものから順に出力します。" << endl;

  for(; m_count >= 0; m_count--){
    cout << m_array[m_count] << endl;
  }
}

int main()
{
  Strings str(Ask());

  str.Input();
  str.Output();

  return 0;
}
