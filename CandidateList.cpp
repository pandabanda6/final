#include "CandidateList.h"



CandidateList :: CandidateList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}
void CandidateList::addCandidate(const CandidateType& candidate)
 {
     Node* newNode = new Node(candidate, nullptr);

     if (count == 0) {
         first = newNode;
         last = newNode;
     }
     else {
         last->setLink(newNode);
         last = newNode;
     }

     count++;
 }
int CandidateList::getWinner(CandidateType candidate) // come back to check the if else later
{


    if (count == 0)
    {
        cout << "=> List is empty\n";
        return 0;
    }

    int highestVotes = first->getCandidate().getTotalVotes();
    int winnerSSN = first->getCandidate().getSSN();

    Node* current = first->getLink();
    while (current) 
    {
        int currentVotes = current->getCandidate().getTotalVotes();
        if (currentVotes > highestVotes) 
        {
            highestVotes = currentVotes;
            winnerSSN = current->getCandidate().getSSN();
        }
        current = current->getLink();
    }

    return winnerSSN;
}

bool CandidateList::searchCandidate(int SSN)
{
    if (count == 0)
    {
        cout << "=> List is empty\n";
        return false;
    }

    Node* current = first;

    while (current)
    {
        if (current->getCandidate().getSSN() == SSN)
        {
            // Candidate with the specified SSN found
            cout << "Candidate found:\n";
            cout << "SSN: " << current->getCandidate().getSSN() << "\n";
            //cout << "Name: " << current->getCandidate().printName() << "\n";
            return true; // Candidate found, return true
        }
       
        current = current->getLink();
    }

    // Candidate not found
    cout << "=> SSN not in the list\n";
    return false;
}

void CandidateList :: printCandidateName(int SSN)
{
    if (count == 0)
    {
        cout << "=> List is empty\n";
        
    }

    Node* current = first;

    while (current)
    {
        if (current->getCandidate().getSSN() == SSN)
        {
            // Candidate with the specified SSN found
            cout << "Candidate found:\n";
            cout << "Name: ";
            current->getCandidate().printName();
       
        }

        current = current->getLink();
    }

    // Candidate not found
    cout << "=> SSN not in the list\n";
    
}
void CandidateList :: printAllCandidate()
{
    if (count == 0)
    {
        cout << "=> List is empty\n";
       
    }
}
void  CandidateList ::printCandidateCampusVotes(int SSN) 
{

    if (count == 0)
    {
        cout << "=> List is empty\n";

    }

    Node* current = first;

    while (current)
    {
        if (current->getCandidate().getSSN() == SSN)
        {
            // Candidate with the specified SSN found
            cout << "Candidate found:\n";
            cout << "SSN: " << current->getCandidate().getVotesByCampus(0) << "\n";
            //cout << "Name: " << current->getCandidate().printName() << "\n";
           
        }

        current = current->getLink();
    }

}
void CandidateList ::printCandidateTotalVotes(int SSN)
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }

    Node* current = first;

    while (current)
    {
        if (current->getCandidate().getSSN() == SSN)
        {
            // Candidate with the specified SSN found
            cout << "Candidate found:\n";
            cout << "SSN: " << current->getCandidate().getTotalVotes() << "\n";
            //cout << "Name: " << current->getCandidate().printName() << "\n";

        }

        current = current->getLink();
    }
}
void CandidateList ::desrtoyList()
{

}
CandidateList :: ~CandidateList()
{
    desrtoyList();
}
