#include "T.h"

int main() {
    std::cout << "\n=== Class Template Demo ===\n";
    Pair<int, std::string> p(42, "Hello");
    p.display();

    std::cout << "\n=== Function Template with Specialization ===\n";
    printTypeInfo(123);
    printTypeInfo(3.14);
    printTypeInfo(std::string("Template specialization!"));

    std::cout << "\n=== Variadic Template Demo ===\n";
    printAll("This ", "is ", "a ", "variadic ", "template ", "demo.\n");

    return 0;
}
