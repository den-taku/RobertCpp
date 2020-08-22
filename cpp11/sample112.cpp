#include <iostream>
using namespace std;

struct Person{
  int age;
  double weight;
  double height;
};

void aging(Person* p)
{
  cout << "1年経過しました。" << endl;
  p->age++;
}

int main()
{
  Person p;

  cout << "年齢を入力してください。" << endl;
  cin >> p.age;
  cout << "体重を入力してください。" << endl;
  cin >> p.weight;
  cout << "身長を入力してください。" << endl;
  cin >> p.height;

  cout << "年齢" << p.age << "体重" << p.weight << "身長" << p.height << "です。" << endl;

  aging(&p);

  cout << "年齢" << p.age << "体重" << p.weight << "身長" << p.height << "です。" << endl;

  return 0;
}
