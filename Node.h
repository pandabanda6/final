#pragma once
#ifndef NODE_H
#define NODE_H
#include "CandidateType.h"
class Node : public CandidateType
{
private:
    CandidateType candidate;
    Node* link; //pointer that points to next node
public:
    Node();// : link(nullptr);
    Node(const CandidateType& votes, Node* theLink);// : candidate(votes), link(theLink);
    Node* getLink() const;
    CandidateType getCandidate() const;
    void setCandidate(const CandidateType& votes);
    void setLink(Node* theLink);
    ~Node();

};
#endif
