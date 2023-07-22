//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_STRENGTHEXERCISE_H
#define GYMMANAGEMENT_STRENGTHEXERCISE_H

#include "Exercise.h"

class StrengthExercise : public Exercise{
    string bodyPart;
    int numSets;
    int numReps;
    int avgTime;

public:
    StrengthExercise(string name, string equipment, string bodyPart, int numSets, int numReps, int avgTime);

    void print();
    Exercise* getCopy();

    string getBodyPart();
    int getNumSets();
    int getNumReps();
    int getAvgTime();

    void setBodyPart(const string &bodyPart);
    void setNumSets(int numSets);
    void setNumReps(int numReps);
    void setAvgTime(int avgTime);

};


#endif //GYMMANAGEMENT_STRENGTHEXERCISE_H
