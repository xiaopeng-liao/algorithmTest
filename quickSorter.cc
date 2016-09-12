#include<vector>
#include <iostream>
#include "quickSorter.hh"


using namespace TheTest;
using namespace std;

vector<float> quickSorter::doSort(vector<float>& toSort, bool ascending){
  cout<<"running quickerSorter..."<<endl;
  cout<<"in total "<< toSort.size() << " items" << endl;
  if (toSort.size() <=1 ) return toSort; //nothing to sort with 1 item.
  vector<float> leftVector;
  int pivotIndex = toSort.size()-1;
  int currIndex = 0; //start from 1 for comparing
  int compIndex = 0; //the moving index for compare
  int start = 0;
  int end = toSort.size()-1;//set the start and the end index.

  performOneSorting(toSort,pivotIndex,compIndex,currIndex, start, end, ascending);

  return toSort;
}

//starting sorting for given pivotIndex
void quickSorter::performOneSorting(vector<float>& toSort,
  int pivotIndex, int compIndex,int currIndex,
  int start, int end, bool ascending){

  for(;compIndex < end; ++compIndex){
    if(ascending?toSort[compIndex] < toSort[pivotIndex]: toSort[compIndex] > toSort[pivotIndex]){
      switchElement(toSort,compIndex,currIndex);
      currIndex++; //increase current
    }
  }
  //at the end of one iteration, switch pivot and the current
  switchElement(toSort,pivotIndex,currIndex);
  displayVector(toSort);
  //call to sort recursively on the left side
  if(currIndex > start + 1){ //must have more than 1 element
    cout<<"[left + 1]sorting from " << start << " to " << currIndex - 1 << endl;
    performOneSorting(toSort, currIndex - 1, start,start, start, currIndex - 1,ascending);
  }
  //call to sort recursively on the right side
  if(currIndex < end - 1) //means we have more than 1 item on the right side
  {
    cout<<"[right+1]sorting from " << currIndex + 1 << " to " << end << endl;
    performOneSorting(toSort,end, currIndex + 1, currIndex + 1, currIndex + 1,
    end,ascending);
  }
}

void quickSorter::switchElement(vector<float>& toSort, int elem1, int elem2){
  float temp = toSort[elem1];
  toSort[elem1] = toSort[elem2];
  toSort[elem2] = temp;
}

void quickSorter::displayVector(vector<float> toDisplay){
  cout<<"Vector: ";
  for(vector<float>::iterator it = toDisplay.begin();it!=toDisplay.end();++it){
    cout <<' ' << *it;
  }
  cout << endl;
}
