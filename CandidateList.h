#pragma once
#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H
#include<string>
#include"Node.h"
#include "CandidateType.h"
#include <iostream>
using namespace std;

class CandidateList// : public Node
{
private:
    Node* first;
    Node* last;
    int count;
public:
    CandidateList();
    void addCandidate();
    int getWinner(CandidateType candidate);
    void searchCandidate();
    void printCandidateName(int SSN);
    void printAllCandidate();
    void printCandidateCampusVotes();
    void printCandidateTotalVotes();
    void desrtoyList();
    ~CandidateList();
};

#endif
