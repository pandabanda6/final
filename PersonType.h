#pragma once
#ifndef PersonType_H
#define PersonType_H

#include<string>

class PersonType {

private:
    std::string fName;
    std::string lName;
    int SSN;

public:
    PersonType(); // Default Constructor
    PersonType(std::string fName, std::string lName, int SSN); // Overloaded Constructor

    // Member functions
    void setPersonInfo(std::string newfName, std::string newlName, int newSSN);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    void printName() const;
    void printPersonInfo() const;
    void printSSN() const;

    ~PersonType();
};

#endif

