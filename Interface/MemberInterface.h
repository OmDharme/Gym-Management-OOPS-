//
// Created by Om Dharme on 06/07/23.
//

#ifndef GYMMANAGEMENT_MEMBERINTERFACE_H
#define GYMMANAGEMENT_MEMBERINTERFACE_H

#include "./../Headers/Gym/Gym.h"

bool memberInterface(Gym* gym, Member* m);
bool displayTrainerInterface(Trainer* t);
bool routineInterface(Routine* routine);
bool displayRoutineInterface(Routine* routine, string day);

#endif //GYMMANAGEMENT_MEMBERINTERFACE_H
