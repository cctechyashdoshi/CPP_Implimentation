#include "../HeaderFiles/Sorting&Searching.h"
#include <iostream>
#include <vector>
#include <algorithm>

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> emptyArray;
    std::vector<int> singleElementArray = { 1 };
    std::vector<int> sortedArray = { 1, 2, 3, 4, 5 };
    std::vector<int> reverseSortedArray = { 5, 4, 3, 2, 1 };
    std::vector<int> duplicateElementsArray = { 3, 1, 2, 3, 1, 2 };

    SortingSearching sorterSearcher;

    sorterSearcher.bubbleSort(emptyArray);
    sorterSearcher.bubbleSort(singleElementArray);
    sorterSearcher.bubbleSort(sortedArray);
    sorterSearcher.bubbleSort(reverseSortedArray);
    sorterSearcher.bubbleSort(duplicateElementsArray);

    std::cout << "Sorted empty array: ";
    printArray(emptyArray);
    std::cout << "Sorted single element array: ";
    printArray(singleElementArray);
    std::cout << "Sorted sorted array: ";
    printArray(sortedArray);
    std::cout << "Sorted reverse sorted array: ";
    printArray(reverseSortedArray);
    std::cout << "Sorted duplicate elements array: ";
    printArray(duplicateElementsArray);

    std::vector<int> searchArray = { 1, 2, 3, 4, 5 };
    int targetInArray = 3;
    int targetNotInArray = 6;

    bool foundInArray = sorterSearcher.binarySearch(searchArray, targetInArray);
    bool foundNotInArray = sorterSearcher.binarySearch(searchArray, targetNotInArray);

    std::cout << "Target " << targetInArray << " found in array: " << (foundInArray ? "Yes" : "No") << std::endl;
    std::cout << "Target " << targetNotInArray << " found in array: " << (foundNotInArray ? "Yes" : "No") << std::endl;

    std::sort(searchArray.begin(), searchArray.end());
    bool stdFoundInArray = std::binary_search(searchArray.begin(), searchArray.end(), targetInArray);
    bool stdFoundNotInArray = std::binary_search(searchArray.begin(), searchArray.end(), targetNotInArray);

    std::cout << "Using std::sort and std::binary_search:" << std::endl;
    std::cout << "Target " << targetInArray << " found in array: " << (stdFoundInArray ? "Yes" : "No") << std::endl;
    std::cout << "Target " << targetNotInArray << " found in array: " << (stdFoundNotInArray ? "Yes" : "No") << std::endl;

    return 0;
}