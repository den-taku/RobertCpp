#include <iostream>
using namespace std;

class Car{
  private:
    int num;
    double gas;
  public:
    Car();
    void show();
};

Car::Car()
{
  num = 0;
  gas = 0.0;
  cout << "車を作成しました。" << endl;
}
void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
}

int main()
{
  Car car1;

  car1.show();

  return 0;
}
