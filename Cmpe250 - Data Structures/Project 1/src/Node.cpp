#include "Node.hpp"

class Node
{
public:
    Node(int aData)
    {
        this.data = aData;
    }

    Node(const Node& aNode)
    {
        this.data = aNode.data;
        this.next = aNode.next;
    }
}