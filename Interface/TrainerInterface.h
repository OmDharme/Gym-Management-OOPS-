//
// Created by Om Dharme on 08/07/23.
//

#ifndef GYMMANAGEMENT_TRAINERINTERFACE_H
#define GYMMANAGEMENT_TRAINERINTERFACE_H

#include "./../Headers/Gym/Gym.h"

bool addExerciseInterface(Gym* gym, Member* member, string day, Exercise* exercise);
bool chooseDayInterface(Gym* gym, Member* member, Exercise* exercise);
bool chooseExerciseInterface(Gym* gym, Member* member);
bool updateRoutineInterface(Gym* gym, Member* member);
bool accessMembersInterface(Gym* gym, Trainer* trainer);
bool trainerInterface(Gym* gym, Trainer* trainer);
bool displayMemberInterface(Member* member);
bool accessedMemberInterface(Gym* gym, Member* member);
bool getMemberInfoInterface(Gym* gym, Trainer* trainer);
bool addMemberInterface(Gym* gym, Member* member);

#endif //GYMMANAGEMENT_TRAINERINTERFACE_H
