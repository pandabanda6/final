#include "PersonType.h"
#include <iostream>
#include <string>

PersonType::PersonType() 
{
    SSN = 0; // Default constructor initializes SSN to 0
}

PersonType::PersonType(std::string newfName, std::string newlName, int newSSN) 
{
    fName = newfName;
    lName = newlName;
    SSN = newSSN;
}

void PersonType::setPersonInfo(std::string newfName, std::string newlName, int newSSN) 
{
    fName = newfName;
    lName = newlName;
    SSN = newSSN;
}

std::string PersonType::getFirstName() const 
{
    return fName;
}

std::string PersonType::getLastName() const 
{
    return lName;
}

int PersonType::getSSN() const 
{
    return SSN;
}

void PersonType::printName() const 
{
    std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printPersonInfo() const 
{
    printSSN();
    std::cout << " " << fName << " " << lName << std::endl;
}

void PersonType::printSSN() const {
    int ssn = SSN;
    int part1 = ssn / 1000000;
    ssn %= 1000000;
    int part2 = ssn / 10000;
    ssn %= 10000;
    int part3 = ssn / 1;
    ssn %= 1;
    //Format the dashes

    std::cout << part1 << "-" << part2 << "-" << part3;
}

PersonType::~PersonType() {
    // Destructor code, if needed
}

