#include <iostream>
using namespace std;

struct Car{
  int num;
  double gas;
};

inline void show(Car c)
{
  cout << "車のナンバーは" << c.num << "ガソリン量は" << c.gas << "です。" << endl;
}

int main()
{
  Car car1 = {0, 0.0};

  cout << "ナンバーを入力してください。" << endl;
  cin >> car1.num;

  cout << "ガソリン量を入力してください。" << endl;
  cin >> car1.gas ;

  show(car1);

  return 0;
}
