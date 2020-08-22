#include <iostream>
using namespace std;

//Pointクラスの設計
class Point{
  private:
    int x;
    int y;
  public:
    void setX(int a);
    void setY(int b);
    int getX(){return x;}
    int getY(){return y;}
};

void Point::setX(int a)
{
  if(a >= 0 && a <=10){
    x = a;
    cout << "xの値を" << x << "に設定しました。" << endl;}
  else{
    x = 0;
    cout << a << "は正しいxの値ではありません。" << endl;
    cout << "xの値を" << x << "に設定しました。" << endl;
   }
}
void Point::setY(int b)
{
  if(b >= 0 && b <=10){
    y = b;
    cout << "yの値を" << y << "に設定しました。" << endl;}
  else{
    y = 0;
    cout << b << "は正しいyの値ではありません。" << endl;
    cout << "yの値を" << y << "に設定しました。" << endl;
   }
}

int main()
{
  Point p;

  int a, b;

  cout << "x座標を入力してください。(0 <= x <= 10 を満たす整数)" << endl;
  cin >> a;
  p.setX(a);

  cout << "y座標を入力してください。(0 <= y <= 10 を満たす整数)" << endl;
  cin >> b;
  p.setY(b);

  cout << "座標は(" << p.getX() << ',' << p.getY() << ")です。" << endl;

  return 0; 
}
