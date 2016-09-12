#ifndef ISORTER_HH
#define ISORTER_HH

#include <vector>

namespace TheTest{
  using namespace std;
  class ISorter{
  public:
    virtual vector<float> doSort(vector<float> & toSort, bool ascending) = 0;
  };
}

#endif
