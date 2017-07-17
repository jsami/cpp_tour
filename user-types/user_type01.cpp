// using structs

#include <iostream>
using namespace std;

struct Vector {
  int sz;
  double* elem;
  // we can define a public member function in a struct
  void print_elements() {
    for(int i=0; i!=sz; i++) {
      cout << elem[i] << " ";
    }
    cout << endl;
  }
};

void vector_init(Vector& v, int s) {
  v.elem = new double[s]; // allocate an array of s doubles
  v.sz = s;
}

// read s integers from cin and return their sum; we assume that s is positive
double read_and_sum(int s) {
  Vector v;
  vector_init(v, s);    // allocate s elements for v
  for(int i=0; i!=s; i++) {
    cin >> v.elem[i];
  }

  cout << "the vector elements: ";
  v.print_elements();

  double sum = 0;
  for(int i=0; i!=s; i++) {
    sum += v.elem[i];
  }
  return sum;
}

int main() {
  int s = read_and_sum(5);
  cout << "Sum: " << s << endl;
  return 0;
}