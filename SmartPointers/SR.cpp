#include "SR.h"
#include <iostream>

Node::Node(const std::string& n) : name(n) {
    std::cout << "Node " << name << " created\n";
}

Node::~Node() {
    std::cout << "Node " << name << " destroyed\n";
}

void SmartPointerDemo::uniquePointerDemo() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(42);
    std::cout << "UniquePtr: ptr1 holds " << *ptr1 << "\n";

    std::unique_ptr<int> ptr2 = std::move(ptr1);
    if (!ptr1) std::cout << "ptr1 is now nullptr\n";
    std::cout << "UniquePtr: ptr2 holds " << *ptr2 << "\n";
}

void SmartPointerDemo::sharedPointerDemo() {
    auto node1 = std::make_shared<Node>("Node1");
    auto node2 = std::make_shared<Node>("Node2");

    node1->next = node2;
    node2->next = node1;

    std::cout << "Cyclic reference created. Nodes won't be destroyed automatically.\n";
}

void SmartPointerDemo::weakPointerDemo() {
    auto node1 = std::make_shared<Node>("Node1");
    auto node2 = std::make_shared<Node>("Node2");

    node1->next = node2;
    std::weak_ptr<Node> weakRef = node1; 

    std::cout << "Weak pointer used to prevent cyclic reference.\n";
}
