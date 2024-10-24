#pragma once
#include <memory>  
#include <string>  

class SmartPointerDemo {
public:
    void uniquePointerDemo(); 
    void sharedPointerDemo();
    void weakPointerDemo(); 
};

class Node {
public:
    std::string name;                
    std::shared_ptr<Node> next;         

    Node(const std::string& n);        
    ~Node();                        
};
