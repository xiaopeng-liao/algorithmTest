#ifndef _SORTING_HH
#define _SORTING_HH

#include <vector>
#include <string>


namespace TheTest{
  using namespace std;
  class sorter{
  public:
    virtual ~sorter();
    virtual vector<float> sort(vector<float> & v, bool ascending);

  };
}

#endif
