//
// Created by Om Dharme on 04/07/23.
//

#ifndef GYMMANAGEMENT_GYM_H
#define GYMMANAGEMENT_GYM_H

#include "./../Person/Trainer.h"
#include "./../Person/Member.h"
#include "./../Exercise/StrengthExercise.h"
#include "./../Exercise/CardioExercise.h"


class Gym {
    string name;
    vector<Trainer*> trainers;
    vector<Member*> members;
    vector<Exercise*> exercises;

public:
    Gym(string name);

    void addTrainer(Trainer* trainer);
    void addMember(Member* member);
    void addExercise(Exercise* exercise);

    vector<Trainer*> getTrainers();
    vector<Member*> getMembers();
    vector<Exercise*> getExercises();

    Trainer* getTrainerByName(string name);

    void fillData();

    void addExerciseToMember(Member* member, string day, Exercise* exercise);
};


#endif //GYMMANAGEMENT_GYM_H
