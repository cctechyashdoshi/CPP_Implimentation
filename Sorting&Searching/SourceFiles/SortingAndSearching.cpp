#include "../HeaderFiles/Sorting&Searching.h"
#include <algorithm>

void SortingSearching::bubbleSort(std::vector<int>& arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}

bool SortingSearching::binarySearch(const std::vector<int>& arr, int target) {
    if (arr.empty()) return false;

    size_t left = 0, right = arr.size() - 1;
    while (left <= right) {
        size_t mid = left + (right - left) / 2;
        if (arr[mid] == target) return true;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}