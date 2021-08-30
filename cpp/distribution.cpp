/*
 * Implement a base class for representing different types of distributions.
 */

#include <iostream>

using namespace std;

class Distribution {
public:
  virtual mean() {}
  virtual covariance() {}
};

class Gaussian : public Distribution {
public:
  size_t dim;
  float mean[];
  float covariance[][];
};


class ParticleSet : public Distribution {
public:

  size_t n; // number of particles

  vector<float> particles;
  vector<float> weigths;

  

};


int main() {

  cout << "hello" << endl;

  return 0;
}
