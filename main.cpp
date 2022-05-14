#include <iostream>

#include "assignment/insertion_sort.hpp"

#include "assignment/heap_sort.hpp"

#include "assignment/partitioning.hpp"
#include "assignment/quick_sort.hpp"

#include "assignment/merging.hpp"
#include "assignment/merge_sort.hpp"

using namespace std;
using assignment::binary_search;
using assignment::InsertionSort;
using assignment::linear_search;
using assignment::median_of_three;

int main() {

  std::vector<int> arr = {-39, -79, 100, 5};

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

////  InsertionSort sort;
//  auto sort = InsertionSort(assignment::binary_search);
//  sort.Sort(arr);
//
//  for (int i = 0; i < arr.size(); i++) {
//    cout << arr[i] << " ";
//  }

  cout << median_of_three(arr, 0, 3);

  return 0;
}
