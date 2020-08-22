#include <iostream>
using namespace std;

struct Person {
  int age;
  double weight;
  double height;
};

inline void a(Person* p)
{
  cout << "年齢を入力してください。" << endl;
  cin >> p->age ;
}

inline void w(Person* p)
{
  cout << "体重を入力してください。" << endl;
  cin >> p->weight;
}

inline void h(Person* p)
{
  cout << "身長を入力してください。" << endl;
  cin >> p->height;
}

inline void c(Person p)
{
  cout << "年齢" << p.age << "体重" << p.weight << "身長" << p.height << "です。" << endl;
}

int main()
{
  Person p1, p2;

  a(&p1);
  w(&p1);
  h(&p1);

  a(&p2);
  w(&p2);
  h(&p2);

  c(p1);
  c(p2);
  
  return 0;
}
