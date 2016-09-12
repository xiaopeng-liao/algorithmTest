#include <iostream>
#include "sorting.hh"

using namespace std;
using namespace TheTest;

int main(){
  cout<<"Starting program..." << endl;
  std::vector<float> toSort {13.0,4.0,3.0,6.0,7.0,1.0,9.0,5.0,12.5};
  sorter theSorter;
  auto res = theSorter.sort(toSort,false);
  return 0;
}
