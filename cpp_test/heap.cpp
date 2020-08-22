#include <iostream>
using namespace std;

void heap_soat(int n, int a[]);
void see(int n, int a[]);

int main(){
  int a[] = {4, 5, 6, 23, 94, 4, 0, 0, 32, 32, 3, 4,};
  see(12, a);
  heap_soat(12, a);
  see(12, a);
  return 0;
}

void heap_soat(int n, int a[]){
  int i, j, k;
  int x;

  //making heap

  for(k = 1; k < n; k++){
    i = k;
    x = a[i];
    while((j = i/2) >= 1){
      if(a[j] >= x) break;
      a[i] = a[j];
      i = j;
    }
    a[i] = x;
  }

  see(12, a);

  //pull out biggest
  
  n--;
  while(n > 1){
    x = a[n];
    a[n] = a[0];
    n--;
    i = 1;
    while((j = 2 * i) <= n){
      if(j < n && a[j] < a[j + 1]) j++;
      if(a[j] <= x) break;
      a[i] = a[j];
      i = j;
    }
    a[i] = x;
  }
}

void see(int n, int a[]){
  for(int i = 0; i < n; i++){
    cout << a[i] << " " << flush;
  }
  cout << endl;
}
