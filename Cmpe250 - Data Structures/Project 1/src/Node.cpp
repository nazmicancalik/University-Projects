#include "Node.hpp"

Node::Node(int aData)
{
    this.data = aData;
}

Node::Node(const Node &aNode)
{
    this.data = aNode.data;
    if(this.next)
    {
        this->next = new Node(*(aNode.next));
    }
}

Node& Node::operator=(const Node& aNode)
{
    this->data = aNode.data;
    if(aNode.next)
    {
        delete this->next;
        this->next = new Node(*(aNode.next));
    }
    return *this;
}