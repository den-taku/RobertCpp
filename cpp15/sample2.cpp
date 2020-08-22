#include <iostream>
#include <string>
using namespace std;

//Carクラスの宣言
class Car{
  private:
    int num;
    double gas;
    char* pName;
  public:
    Car(char* pN, int n, double g);
    ~Car();
    void show();
};

//Carクラスメンバ関数の定義
Car::Car(char* pN, int n, double g)
{
  pName = new char[strlen(pN)+1];
  strcpy(pName, pN);
  num = n;
  gas = g;
  cout << pName << "を作成しました。" << endl;
}
Car::~Car()
{
  cout << pName << "を破棄します。" << endl;
  delete[] pName;
}
void Car::show()
{
  cout << "車のナンバーは" << num << "です。" << endl;
  cout << "ガソリン量は" << gas << "です。" << endl;
  cout << "名前は" << pName << "です。" << endl;
}

//Carクラスの利用
int main()
{
  Car car1("mycar",1234,25.5);
  car1.show();

  return 0;
}
