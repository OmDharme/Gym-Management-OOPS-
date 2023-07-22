//
// Created by Om Dharme on 26/06/23.
//

#include "CardioExercise.h"

CardioExercise::CardioExercise(string name, string equipment, int time) : Exercise(name, "Cardio", equipment) {
    this->time = time;
}

void CardioExercise::print(){
    cout << "Name: " << this->name << endl;
    cout << "Equipment: " << this->equipment << endl;
    cout << "Type: " << this->type << endl;
    cout << "Time: " << this->time << endl;
}

Exercise* CardioExercise::getCopy() {
    return new CardioExercise(*dynamic_cast<CardioExercise*>(this));
}

void CardioExercise::setTime(int time) {
    this->time = time;
}

int CardioExercise::getTime() {
    return this->time;
}
