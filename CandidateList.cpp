#include "CandidateList.h"



CandidateList::CandidateList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

void CandidateList::addCandidate(const CandidateType& candidate) {
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

void CandidateList::searchCandidate()
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }
    else
    {

    }
}
void CandidateList::printCandidateName(int SSN)
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }
}
void CandidateList::printAllCandidate()
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }
}
void  CandidateList::printCandidateCampusVotes()
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }
}
void CandidateList::printCandidateTotalVotes()
{
    if (count == 0)
    {
        cout << "=> List is empty\n";

    }
}
void CandidateList::desrtoyList()
{

}
CandidateList :: ~CandidateList()
{

}
