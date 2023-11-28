#include "Node.h"
#include <iostream>

Node:: Node() : link(nullptr) 
{
	
}
Node:: Node(const CandidateType& votes, Node* theLink) : candidate(votes), link(theLink)
{
	
}
Node* Node::getLink() const 
{
	return link;
}
CandidateType Node::getCandidate() const
{
	return candidate;
}
void Node::setCandidate(const CandidateType& votes)
{
	candidate = votes; 
}
void  Node::setLink(Node* theLink)
{
	link = theLink;
}
Node:: ~Node() 
{
}
