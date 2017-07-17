#include <iostream>
#include <vector>
using namespace std;

void increment(vector<int>& v) {
  for(auto& x:v) {
    x++;
  }
}

void print_vector(vector<int>& v) {
  cout << "[";
  for(auto x: v) {
    cout << x << ",";
  }
  cout << "]";
  cout << endl;
}

int main() {
  vector<int> v = {0, 1, 2, 3, 4,5};
  cout << "Before increment: ";
  print_vector(v);
  increment(v);
  cout << "After increment: ";
  print_vector(v);
  return 0;
}