#include <iostream>
using namespace std;

class Car{
  public:
    int num;
    double gas;
    void show();
};

void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
}

int main()
{
  Car car1;

  car1.num = 1234;
  car1.gas = 20.5;

  car1.show();

  return 0;
}
