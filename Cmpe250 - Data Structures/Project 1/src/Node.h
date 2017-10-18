#ifndef NODE_H
#define NODE_H

#include <cstddef>
#include <iostream>
class NODE_H
{
public:
    int data;
    Node* next = 0;                         //Default init

    Node(int data);                         //Constructor
    Node(const Node& node);                 //Copy Constructor
    Node& operator=(const Node &node);
    Node operator+(const Node &node);
    Node operator-(const Node &node);
    ~Node();
};
#endif NODE_H