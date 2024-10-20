#include "../HeaderFiles/Array&Vector.h"

#include <iostream>
#include <cstring>

void arrayAndVector::danglingArray() {
    int arr[3] = { 1, 2, 3 };
    std::cout << "Accessing arr[5] (out-of-bounds): " << arr[5] << "\n"; // Undefined behavior!
}

void arrayAndVector::vectorMemoryGrowth() {
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
        std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";
    }
}

void arrayAndVector::nullTerminatedStringIssue() {
    char str[6] = { 'H', 'e', 'l', 'l', 'o' };
    std::cout << "C-string without null terminator: " << str << "\n"; // Risk of printing garbage
}

void arrayAndVector::stringViewAfterMove() {
    std::string original = "Hello, C++!";
    std::string moved = std::move(original);

    std::cout << "Moved string: " << moved << "\n";
    std::cout << "Original string after move: " << original << "\n";  // Now empty
}
