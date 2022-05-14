#include <iostream>

#include "assignment/insertion_sort.hpp"

#include "assignment/heap_sort.hpp"

#include "assignment/partitioning.hpp"
#include "assignment/quick_sort.hpp"

#include "assignment/merging.hpp"
#include "assignment/merge_sort.hpp"

using namespace std;
using assignment::HeapSort;

int main() {

  std::vector<int> arr = {-39, -79, 100, 5};

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  HeapSort s;
  s.Sort(arr);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}
