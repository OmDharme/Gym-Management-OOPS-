//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_PERSON_H
#define GYMMANAGEMENT_PERSON_H

#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    string phoneNo;

public:
    Person(string name, string phoneNo);
    virtual void print() = 0;

    string getName();
    string getPhoneNo();

    void setName(string name);
    void setPhoneNo(string phoneNo);
};


#endif //GYMMANAGEMENT_PERSON_H
