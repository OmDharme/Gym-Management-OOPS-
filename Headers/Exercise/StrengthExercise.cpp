//
// Created by Om Dharme on 26/06/23.
//

#include "StrengthExercise.h"

StrengthExercise::StrengthExercise(string name, string equipment, string bodyPart, int numSets, int numReps,
                                   int avgTime) : Exercise(name, "Strength", equipment) {
    this->bodyPart = bodyPart;
    this->numSets = numSets;
    this->numReps = numReps;
    this->avgTime = avgTime;
}

void StrengthExercise::print() {
    cout << "Name: " << this->name << endl;
    cout << "Equipment: " << this->equipment << endl;
    cout << "Type: " << this->type << endl;
    cout << "Body Part: " << this->bodyPart << endl;
    cout << "Number of Sets: " << this->numSets << endl;
    cout << "Number Of Reps: " << this->numReps << endl;
    cout << "Average Time: " << this->avgTime << endl;
}

Exercise* StrengthExercise::getCopy() {
    return new StrengthExercise(*dynamic_cast<StrengthExercise*>(this));
}

void StrengthExercise::setBodyPart(const string &bodyPart) {
    this->bodyPart = bodyPart;
}

void StrengthExercise::setNumSets(int numSets) {
    this->numSets = numSets;
}

void StrengthExercise::setNumReps(int numReps) {
    this->numReps = numReps;
}

void StrengthExercise::setAvgTime(int avgTime) {
    this->avgTime = avgTime;
}

string StrengthExercise::getBodyPart(){
    return this->bodyPart;
}

int StrengthExercise::getNumSets() {
    return this->numSets;
}

int StrengthExercise::getNumReps() {
    return this->numReps;
}

int StrengthExercise::getAvgTime() {
    return this->avgTime;
}
