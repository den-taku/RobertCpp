#include <iostream>
using namespace std;

class Car{
  protected:
    int num;
    double gas;
  public:
    Car();
    void setCar(int n, double g);
    void show();
};

class RacingCar : public Car{
  private:
    int course;
  public:
    RacingCar();
    void setCourse(int c);
    void show();
};

Car::Car()
{
  num = 0;
  gas = 0;
  cout << "車を作成しました。" << endl;
}
void Car::setCar(int n, double g)
{
  num = n;
  gas = g;
  cout << "ナンバーを" << num << "に、ガソリン量を" << gas << "にしました。" << endl;
}
void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
}

RacingCar::RacingCar()
{
  course = 0;
  cout << "レーシングカーを作成しました。" << endl;
}
void RacingCar::setCourse(int c)
{
  course = c;
  cout << "コース番号を" << course << "にしました。" << endl;
}
void RacingCar::show()
{
  cout << "レーシングカーのナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
  cout << "コース番号は" << course << "です。" << endl;
}

int main()
{
  RacingCar rccar1;
  rccar1.setCar(1234, 20.5);
  rccar1.setCourse(5);

  rccar1.show();

  return 0;
}
