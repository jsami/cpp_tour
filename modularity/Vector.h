// Vector.h - Put declaration Vector in another file

class Vector {
public:
  Vector(int s);
  double& operator[](int i);
  int size();
  void series();
private:
  double* elem;
  int sz;
};

