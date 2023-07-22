//
// Created by Om Dharme on 26/06/23.
//

#include "Routine.h"
#include "./../Exercise/StrengthExercise.h"
#include "./../Exercise/CardioExercise.h"

Routine::Routine() {}

Routine::Routine(Routine& routine) {
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(auto day : days){
        vector<Exercise*> exercises = routine.getRoutineOfDay(day);
        this->setRoutineOfDay(day, exercises);
        exercises.clear();
    }



}

vector<Exercise*>& Routine::getRoutineOfDayUtil(string day) {
    if(day == "Monday") return this->mon;
    else if(day == "Tuesday") return this->tue;
    else if(day == "Wednesday") return this->wed;
    else if(day == "Thursday") return this->thu;
    else if(day == "Friday") return this->fri;
    else if(day == "Saturday") return this->sat;

//    return {};
}

vector<Exercise*> Routine::getRoutineOfDay(string day) {

        vector<Exercise*> temp = getRoutineOfDayUtil(day);

        vector<Exercise*> exercises;

        for(auto exercise : temp){
//            Exercise* newExercise;
//            if(exercise->getType() == "Strength"){
//                newExercise = new StrengthExercise(*dynamic_cast<StrengthExercise*>(exercise));
//            }else if(exercise->getType() == "Cardio"){
//                newExercise = new CardioExercise(*dynamic_cast<CardioExercise*>(exercise));
//            }

            Exercise* newExercise = exercise->getCopy();

            exercises.push_back(newExercise);
        }

        return exercises;
}

void Routine::setRoutineOfDay(string day, vector<Exercise*> exercises){

    getRoutineOfDayUtil(day).clear();

    for(auto exercise : exercises){
        addExerciseToDay(day, exercise);
    }

}

void Routine::addExerciseToDay(string day, Exercise* exercise){

    Exercise* newExercise = exercise->getCopy();

    getRoutineOfDayUtil(day).push_back(newExercise);
}

void Routine::printExercisesOfDay(string day) {
    vector<Exercise*> exercises = getRoutineOfDayUtil(day);

    cout << "Exercises for " << day << endl;

    if(exercises.empty()){
        cout << "No Exercises Today" << endl;
    }else{
        for(auto exercise : exercises){
            exercise->print();
            cout << endl;
        }
    }
}

void Routine::print(){
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(auto day : days){
        printExercisesOfDay(day);
        cout << endl;
    }
}

Routine::~Routine() {
    this->mon.clear();
    this->tue.clear();
    this->wed.clear();
    this->thu.clear();
    this->fri.clear();
    this->sat.clear();
}

