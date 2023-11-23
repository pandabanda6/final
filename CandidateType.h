#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"
const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType {

private:
    int totalVotes;
    int campusVotes[NUM_OF_CAMPUSES];  //arrary

public:
    CandidateType(); // Default Constructor
    CandidateType(std::string fName, std::string lName, int SSN); //  constructor with arguments

    // Member functions
    void updateVotesByCampus(int campusNum, int newVote);
    int getTotalVotes() const;
    int getVotesByCampus(int campusNum) const;
    void printCandidateInfo() const;
    void printCandidateTotalVotes() const;
    void printCandidateCampusVotes(int campusNum) const;

    ~CandidateType(); // Destructor (empty)


};

#endif