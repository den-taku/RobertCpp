#include <iostream>
using namespace std;

class Car{
  private:
    int num;
    double gas;
  public:
    void show();
    void setNumGas(int n, double g);
};

void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
}

void Car::setNumGas(int n, double g)
{
  if(g > 0 && g < 1000){
    num = n;
    gas = g;
    cout << "ナンバーを" << num << "に ガソリン量を" << gas << "にしました。" << endl;}
  else{
    cout << g <<  "は正しい値ではありません。" << endl;
    cout << "ガソリン量を変更できません出した。" << endl;}
}

int main()
{
  Car car1;

  car1.setNumGas(1234, 20.5);
  car1.show();

  cout << "正しくないガソリン量を(-10.0)で指定してみます。" << endl;
  car1.setNumGas(1234, -10.0);
  car1.show();

  return 0;
}
