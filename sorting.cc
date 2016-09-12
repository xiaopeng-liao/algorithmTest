#include <vector>
#include <iostream>

#include "sorting.hh"
#include "ISorter.hh"
#include "quickSorter.hh"

using namespace TheTest;
using namespace std;

vector<float> sorter::sort(vector<float> & toSort,bool ascending){
  cout << "start sorting..." << endl;
  ISorter* theSorter = new quickSorter();
  auto sorted = theSorter->doSort(toSort, ascending);

  return sorted;
}

sorter::~sorter(){

}
