#include <iostream>
using namespace std;

union Year{
  int ad;
  int gengo;
};

int main()
{
  Year myyear;

  cout << "西暦を入力してください。" << endl;
  cin >> myyear.ad;

  cout << "西暦は" << myyear.ad << "です。" << endl;
  cout << "元号も" << myyear.gengo << "です。" << endl;

  cout << "元号を入力してください。" << endl;
  cin >> myyear.gengo;

  cout << "元号は" << myyear.gengo << "です。" << endl;
  cout << "西暦も" << myyear.ad << "です。" << endl;

  return 0; 
}
