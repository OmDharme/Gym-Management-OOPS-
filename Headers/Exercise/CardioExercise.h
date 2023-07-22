//
// Created by Om Dharme on 26/06/23.
//

#ifndef GYMMANAGEMENT_CARDIO_H
#define GYMMANAGEMENT_CARDIO_H

#include "Exercise.h"

class CardioExercise : public Exercise {
    int time;

public:
    CardioExercise(string name, string equipment, int time);

    void print();
    Exercise* getCopy();

    int getTime();

    void setTime(int time);
};


#endif //GYMMANAGEMENT_CARDIO_H
