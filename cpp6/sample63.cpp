#include <iostream>
using namespace std;

int main()
{
  for(int i=1; i<=5; i++){
      switch(i){
  case 5:
      cout << '*' ;
  case 4:
      cout << '*' ;
  case 3:
      cout << '*' ;
  case 2:
      cout << '*' ;
  case 1:
      cout << '*' ;
      cout << endl ;
      break;
      }
  }

  return 0;
}
