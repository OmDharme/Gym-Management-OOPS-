//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_TRAINER_H
#define GYMMANAGEMENT_TRAINER_H


#include "Person.h"
#include "Member.h"
#include "vector"

class Trainer : public Person{
    string type;
    vector<Member*> members;
public:
    Trainer(string name , string phoneNo, string type);
    Trainer(const Trainer& trainer);

    void print();

    string getType();

    void setType(string type);

    void addMember(Member* member);
    void addExerciseToMember(string name, string day, Exercise* exercise);

    vector<Member*> getMembers();

    ~Trainer();
};


#endif //GYMMANAGEMENT_TRAINER_H
