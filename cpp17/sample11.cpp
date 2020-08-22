#include <iostream>
using namespace std;

//構造体Person型の宣言
struct Person{
  int age;
  double weight;
  double height;
};

//aging関数の定義
void aging(Person* p)
{
  p->age++;
}

//main関数
int main()
{
  //Person型の利用
  Person p[2];

  for(int i=0; i<2; i++){
    cout << "年齢を入力してください。" << endl;
    cin >> p[i].age;
    cout << "体重を入力してください。" << endl;
    cin >> p[i].weight;
    cout << "身長を入力してください。" << endl;
    cin >> p[i].height;
  }

  for(int j=0; j<2; j++){
    cout << "年齢" << p[j].age << "体重" << p[j].weight << "身長" << p[j].height << "です。" << endl;
  }

  aging(&p[1]);
  aging(&p[0]);

  cout << "1年経過しました。" << endl;

  for(int j=0; j<2; j++){
    cout << "年齢" << p[j].age << "体重" << p[j].weight << "身長" << p[j].height << "です。" << endl;
  }

return 0;
}
