#include <iostream>
using namespace std;

void print() {
  int v[] = {0, 2, 3, 4, 5, 6};
  for(auto x:v) {
    cout << x << endl;
  }

  for(auto x:{10, 21, 32, 43, 54, 65}) {
    cout << x << endl;
  }
}

int main() {
  int a = 23;
  int& b = a;   //=> a and b are now the same thing
  int c = 45;
  b = c;

  b++;
  cout << "a: " << a << endl; //=> 46
  cout << "b: " << b << endl; //=> 46
  cout << "c: " << c << endl; //=> 45
  return 0;
}