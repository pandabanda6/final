

#include <iostream>
#include "PersonType.h"
#include "CandidateType.h"

using namespace std;

int main() {
    PersonType person("John", "Doe", 123456789);
    CandidateType candidate("Jane", "Smith", 987654321);   //use overloaded constructors to set values

    // Test functions from the PersonType file
    cout << "Person's First Name: " << person.getFirstName() << endl;
    cout << "Person's Last Name: " << person.getLastName() << endl;
    cout << "Person's SSN: " << person.getSSN() << endl;
    cout << "Person's Info:" << endl;
    person.printPersonInfo();
    cout << endl;

    // Test functions from the CandidateType file

    //Update data/set values first
    candidate.updateVotesByCampus(1, 100);
    candidate.updateVotesByCampus(2, 200);
    candidate.updateVotesByCampus(3, 150);

    cout << "Candidate's Info:" << endl;
    candidate.printCandidateInfo();
    cout << "Total Votes: " << candidate.getTotalVotes() << endl;
    cout << "Campus 1 Votes: " << candidate.getVotesByCampus(1) << endl;
    cout << "Campus 2 Votes: " << candidate.getVotesByCampus(2) << endl;
    //Campus 3 + Campus 4

    return 0;
}





