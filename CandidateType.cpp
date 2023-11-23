
#include "CandidateType.h"
#include <iostream>

CandidateType::CandidateType() {
    totalVotes = 0;
    for (int i = 0; i < NUM_OF_CAMPUSES; i++) {
        campusVotes[i] = 0; // Initialize all campus votes to 0, 
        //i will be 0,1,2,3 for the array's index
    }
}

CandidateType::CandidateType(std::string fName, std::string lName, int SSN) : PersonType(fName, lName, SSN) {
    totalVotes = 0;
    for (int i = 0; i < NUM_OF_CAMPUSES; i++) {
        campusVotes[i] = 0; // Initialize all campus votes to 0
        // This function is different from the one above. 
        //It links Person information from the PersonType file with the votes in this file
    }
}

void CandidateType::updateVotesByCampus(int campusNum, int newVote) {
    if (campusNum >= 1 && campusNum <= NUM_OF_CAMPUSES) {
        campusVotes[campusNum - 1] += newVote; // Update campus votes
        totalVotes += newVote; // Update total votes
    }
}
//campusNum >= 1 && campusNum <= NUM_OF_CAMPUSES: 
//    if we receive a campusNum from 1 - 4(NUM_OF_CAMPUSES),we update campus votes respectively. 
//campusVotes[campusNum - 1] += newVote:
//    For example, if campusNum is 2, the index in the array is campusVotes[campusNum - 1] (2-1),  

int CandidateType::getTotalVotes() const {
    return totalVotes;
}

int CandidateType::getVotesByCampus(int campusNum) const {
    if (campusNum >= 1 && campusNum <= NUM_OF_CAMPUSES) {
        return campusVotes[campusNum - 1];
    }
    return 0; // Return 0 for an invalid campus number
    // Maybe we can use a else if also
}

void CandidateType::printCandidateInfo() const {
    PersonType::printPersonInfo(); // Reuse the printPersonInfo function from the PersonType class(Inheritance)
}

void CandidateType::printCandidateTotalVotes() const {
    PersonType::printName(); // Reuse the printName function from the PersonType class(Inheritance)
    std::cout << "Total Votes (all campuses): " << totalVotes << std::endl;
}

void CandidateType::printCandidateCampusVotes(int campusNum) const {
    PersonType::printName(); // Reuse the printName function from the base class
    if (campusNum >= 1 && campusNum <= NUM_OF_CAMPUSES) {
        std::cout << "Campus " << campusNum << " total votes: " << campusVotes[campusNum - 1] << std::endl;
        //Print the vote from an individual campus
    }
}

CandidateType::~CandidateType() {
}




