#include "T.h"

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 first, T2 second) : first_(first), second_(second) {}

template <typename T1, typename T2>
void Pair<T1, T2>::display() const {
    std::cout << "Pair: (" << first_ << ", " << second_ << ")\n";
}

template <typename T>
void printTypeInfo(const T& value) {
    std::cout << "Type: " << typeid(value).name() << ", Value: " << value << "\n";
}

template <>
void printTypeInfo(const std::string& value) {
    std::cout << "Special case for std::string: \"" << value << "\"\n";
}

template <typename... Args>
void printAll(Args... args) {
    (std::cout << ... << args) << '\n'; 
}
