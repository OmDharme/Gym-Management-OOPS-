//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_MEMBER_H
#define GYMMANAGEMENT_MEMBER_H

#include "Person.h"
#include "./../Routine/Routine.h"

class Member : public Person {

    int weight;
    string trainerName;
    Routine* routine;
public:
    Member( string name , string phoneNo , int weight , string trainerName);
    Member(const Member &member);
    void print();

    void setWeight(int weight);
    void setTrainerName(const string &trainerName);
    void addExerciseToRoutine(string day, Exercise* exercise);
    void setExercisesToRoutine(string day, vector<Exercise*> exercises);

    int getWeight();
    string getTrainerName();
    vector<Exercise*> getExercisesOfDay(string day);
    Routine* getRoutine();

    ~Member();
};


#endif //GYMMANAGEMENT_MEMBER_H
