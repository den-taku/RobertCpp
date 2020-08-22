#include <iostream>
using namespace std;

class Car{
  private:
    int num;
    double gas;
  public:
    Car();
    Car(int n, double g);
    void show();
};

Car::Car()
{
  num = 0;
  gas = 0.0;
  cout << "車を作成しました。" << endl;
}

Car::Car(int n, double g)
{
  num = n;
  gas = g;
  cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。" << endl;
}

void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
}

int main()
{
  Car cars[3];

  return 0;
}
