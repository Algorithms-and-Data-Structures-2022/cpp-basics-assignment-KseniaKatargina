#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int diff = left - right;
    int res = diff * diff;
    return res;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if ( mask < 0 || bit_pos < 0){
      return false;
    }

    }

  // Task 3
  int max3(int left, int middle, int right) {
    if(left >= middle && left >= right ){
      return left;
    } else if (middle >= left && middle >= right){
      return middle;
    } else {
      return right;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if(left != nullptr  && right != nullptr) {
      int x = *left;
      *left = *right;
      *right = x;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if(arr != nullptr && length > 0) {
      int sum = 0;
      int i = 0;
      while(i < length) {
        sum += arr[i];
        i++;
      }
      return sum;
    }
      return 0;
    }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if(arr != nullptr && length > 0) {
      int* max = &arr[0];
      int i = 0;
      while(i < length){
        if(arr[i] > *max){
          max = &arr[i];
        }
        i++;
      }
      return max;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if(length > 0) {
      int *arr = new int[length];
      std::fill(arr,arr + length,init_value);
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if(arr_in != nullptr && length > 0) {
      int *copy = new int[length];
      std::copy(arr_in,arr_in + length,copy);
      return copy;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
