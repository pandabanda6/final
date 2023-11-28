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
	void addCandidate(const CandidateType& candidate);
	int  getWinner(CandidateType candidate);
	bool searchCandidate(int SSN);
	void printCandidateName(int SSN);
	void printAllCandidate();
	void printCandidateCampusVotes(int SSN);
	void printCandidateTotalVotes(int SSN);
	void desrtoyList();
	~CandidateList();
};

#endif
