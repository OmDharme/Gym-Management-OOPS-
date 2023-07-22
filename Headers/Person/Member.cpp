//
// Created by Om Dharme on 26/06/23.
//

#include "Member.h"

Member::Member( string name , string phoneNo , int weight , string trainerName) :
        Person(name , phoneNo ) {
    this->weight = weight;
    this->trainerName = trainerName;

    this->routine = new Routine();
}

Member::Member(const Member &member) : Person(member.name, member.phoneNo) {
    this->weight = member.weight;
    this->trainerName = member.trainerName;
    this->routine = new Routine(*member.routine);
}

void Member::print() {
    cout<< "Name: " << this->name << endl;
    cout<< "Phone No: " << this->phoneNo << endl;
    cout<< "Weight: " << this->weight << endl;
    cout << "Trainer Name: " << this->trainerName << endl;
    this->routine->print();
}

void Member::setWeight(int weight) {
    this->weight = weight;
}

void Member::setTrainerName(const string &trainerName) {
    this->trainerName = trainerName;
}

void Member::addExerciseToRoutine(string day, Exercise *exercise) {
    this->routine->addExerciseToDay(day, exercise);
}

void Member::setExercisesToRoutine(string day, vector<Exercise*> exercises){
    this->routine->setRoutineOfDay(day, exercises);
}

int Member::getWeight() {
    return this->weight;
}

string Member::getTrainerName() {
    return this->trainerName;
}

vector<Exercise*> Member::getExercisesOfDay(string day) {
    return this->routine->getRoutineOfDay(day);
}

Routine* Member::getRoutine() {
    return new Routine(*this->routine);
}

Member::~Member(){
    delete this->routine;
}
