#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

class PersonType {

private:
    std::string fName;
    std::string lName;
    int SSN;

public:
    PersonType(); // Default Constructor
    PersonType(std::string fName, std::string lName, int SSN); // Overloaded Constructor

    // Member functions
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    void printName() const;
    void printPersonInfo() const;
    void printSSN() const;

    ~PersonType();
};

#endif
