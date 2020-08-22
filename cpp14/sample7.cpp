#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle{
  protected:
    int speed;
  public:
    void setSpeed(int a);
    virtual void show() = 0;
};

class Car : public Vehicle{
  private:
    int num;
    double gas;
  public:
    Car(int n, double g);
    void show();
};

class Plane : public Vehicle{
  private:
    int flight;
  public:
    Plane(int f);
    void show();
};

void Vehicle::setSpeed(int a)
{
  speed = a;
  cout << "速度は" << speed << "にしました。" << endl;
}

Car::Car(int n, double g)
{
  num = n;
  gas = g;
  cout << "ナンバー" << num << " ガソリン量" << gas << "の車を作成しました。" << endl;
}
void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
  cout << "速度は" << speed << "です。" << endl;
}

Plane::Plane(int f)
{
  flight = f;
  cout << "便" << flight << "の飛行機を作成しました。" << endl;
}
void Plane::show()
{
  cout << "飛行機の便は" << flight << "です。" << endl;
  cout << "速度は" << speed << "です。" << endl;
}

int main()
{
  Vehicle* pVc[2];
  Car car1(1234, 20.5);
  Plane pln1(232);

  pVc[0] = &car1;
  pVc[1] = &pln1;

  for(int i=0; i<2; i++){
    if(typeid(*pVc[i])==typeid(Car))
      cout << (i+1) << "番目は" << typeid(Car).name() << "です。" << endl;
    else
      cout << (i+1) << "番目は" << typeid(Car).name() << "ではありません。" << typeid(*pVc[i]).name() << "です。" << endl;
  }
}
