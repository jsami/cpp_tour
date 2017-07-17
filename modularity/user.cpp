// user.cpp - consumer of Vector module

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

double sqrt_sum(Vector& v) {
  double sum = 0;
  for(int i=0; i!=v.size(); i++) {
    sum += sqrt(v[i]);
  }
  return sum;
}

int main() {
  Vector v(5);
  v.series();
  cout << sqrt_sum(v) << endl;
  return 0;
}