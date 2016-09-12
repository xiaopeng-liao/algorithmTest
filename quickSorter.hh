#ifndef QUICKSORTER_HH
#define QUICKSORTER_HH

#include "ISorter.hh"

namespace TheTest{
  using namespace std;
  class quickSorter: public ISorter{
  public:
    vector<float> doSort(vector<float>& toSort, bool ascending) override;
  private:
    void performOneSorting(vector<float>& toSort,
      int pivotIndex, int compIndex,int currIndex,
      int start, int end, bool ascending);
    void switchElement(vector<float>& toSort, int elem1Idx, int elem2Idx);
    void displayVector(vector<float> toDisplay);
  };
}

#endif
