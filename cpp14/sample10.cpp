#include <iostream>
using namespace std;

//Base0クラスの宣言
class Base0{
  protected:
    int bs0;
  public:
    Base0(int b0=0){bs0=b0;}
    void showBs();
};

//Base1クラスの宣言
class Base1 : public virtual Base0{
  protected:
    int bs1;
  public:
    Base1(int b1=0){bs1=b1;}
    void showB1();
};

//Base2クラスの宣言
class Base2 : public virtual Base0{
  protected:
    int bs2;
  public:
    Base2(int b2=0){bs2=b2;}
    void showB2();
};

//Derivedクラスの宣言
class Derived : public Base1, public Base2{
  protected:
    int dr;
  public:
    Derived(int d=0){dr=d;}
    void showDr();
};

void Base1::showB1()
{
  cout << "bs1は" << bs1 << "です。" << endl;
}

void Base0::showBs()
{
  cout << "bs0は" << bs0 << "です。" << endl;
}

void Base2::showB2()
{
  cout << "bs2は" << bs2 << "です。" << endl;
}

void Derived::showDr()
{
  cout << "drは" << dr << "です。" << endl;
}

int main()
{
  Derived drv;

  drv.showBs();

  return 0;
}
