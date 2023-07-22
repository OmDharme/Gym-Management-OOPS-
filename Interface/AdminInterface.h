//
// Created by Om Dharme on 15/07/23.
//

#ifndef GYMMANAGEMENT_ADMININTERFACE_H
#define GYMMANAGEMENT_ADMININTERFACE_H

#include "./../Headers/Gym/Gym.h"

bool addTrainerInterface(Gym* gym, Trainer* trainer);
bool adminInterface(Gym* gym);
bool getTrainerInfoInterface(Gym* gym);
bool chooseExerciseTypeInterface(Gym* gym);
bool getStrengthExerciseInfoInterface(Gym* gym);
bool getCardioExerciseInfoInterface(Gym* gym);
bool addExerciseInterface(Gym* gym, Exercise* exercise);


#endif //GYMMANAGEMENT_ADMININTERFACE_H
