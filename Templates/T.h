#pragma once

#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second);
    void display() const;

private:
    T1 first_;
    T2 second_;
};

template <typename T>
void printTypeInfo(const T& value);

template <>
void printTypeInfo(const std::string& value);

template <typename... Args>
void printAll(Args... args);

