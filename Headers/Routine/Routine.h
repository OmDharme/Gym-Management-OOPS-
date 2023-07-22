//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_ROUTINE_H
#define GYMMANAGEMENT_ROUTINE_H

#include "./../Exercise/Exercise.h"
#include <vector>

class Routine {
private:
    vector<Exercise*> mon;
    vector<Exercise*> tue;
    vector<Exercise*> wed;
    vector<Exercise*> thu;
    vector<Exercise*> fri;
    vector<Exercise*> sat;

    vector<Exercise*>& getRoutineOfDayUtil(string day);

public:
    Routine();
    Routine(Routine& routine);

    vector<Exercise*> getRoutineOfDay(string day);

    void setRoutineOfDay(string day, vector<Exercise*> exercises);

    void addExerciseToDay(string day, Exercise* exercise);

    void printExercisesOfDay(string day);

    void print();

    ~Routine();
};


#endif //GYMMANAGEMENT_ROUTINE_H
