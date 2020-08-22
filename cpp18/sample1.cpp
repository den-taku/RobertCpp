//１．
//1~100からランダムに数字を10個選びだし，大きい順に
//並べて表示する．


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//1~100の整数をランダムに1個得る関数
int getNum();

//与えられた10個の整数を大きい順に並べる関数
void list(int n[]);

//与えられた10個の整数を順に表示する関数
inline void show(int n[]);

//main関数
int main()
{
  //擬似乱数生成
  srand((unsigned)time(NULL));
  for(int i=1; i<=100; i++){
    rand();
    }

  int num[10];

  for(int i=0; i<10; i++){
    num[i] = getNum();
  }

  list(num);
  show(num);

  return 0;
}

//1~100の整数をランダムに1個得る関数の定義
int getNum()
{
  int num;

  do{
    num = rand()%101;
  }while(!num);

  return num;
}

//与えられた10個の整数を大きい順に並べる関数の定義
void list(int n[])
{
  int t = 0;

  for(int i=0; i<9; i++){
    for(int j=i+1; j<10; j++){
      if(n[i]<n[j]){
        t = n[j];
        n[j] = n[i];
        n[i] = t;
      }
    }
  }
}

//与えられた10個の整数を順に表示する関数の定義
inline void show(int n[])
{
  for(int i=0; i<10; i++){
    cout << n[i] << endl;
  }
}
