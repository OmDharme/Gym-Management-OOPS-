//
// Created by Om Dharme on 04/07/23.
//

#include "Gym.h"

Gym::Gym(string name) {
    this->name = name;

    fillData();
}

void Gym::addMember(Member *member) {
    this->members.push_back(new Member(*member));

    for(auto trainer : this->trainers){
        if(trainer->getName() == member->getTrainerName()){
            trainer->addMember(member);
            break;
        }
    }
}

void Gym::addTrainer(Trainer *trainer) {
    this->trainers.push_back(new Trainer(*trainer));
}

void Gym::addExercise(Exercise *exercise) {
    this->exercises.push_back(exercise->getCopy());
}

vector<Member*> Gym::getMembers() {
    vector<Member*> members;

    for(auto member : this->members){
        members.push_back(new Member(*member));
    }

    return members;
}

vector<Trainer*> Gym::getTrainers(){
    vector<Trainer*> trainers;

    for(auto trainer: this->trainers){
        trainers.push_back(new Trainer(*trainer));
    }

    return trainers;
}

vector<Exercise*> Gym::getExercises() {
    vector<Exercise*> exercises;

    for(auto exercise: this->exercises){
        exercises.push_back(exercise->getCopy());
    }

    return exercises;
}

void Gym::fillData() {

    StrengthExercise* s1 = new StrengthExercise("Bench Press", "Barbell", "Chest", 3, 15, 20);
    CardioExercise* c1 = new CardioExercise("Running", "Treadmill", 20);
    StrengthExercise* s2 = new StrengthExercise("Front Raise", "Dumbells", "Shoulders", 3, 14, 18);
    StrengthExercise* s3 = new StrengthExercise("Side Lateral Raise", "Dumbells", "Shoulders", 3, 14, 18);
    StrengthExercise* s4 = new StrengthExercise("Overhead Press", "Barbell", "Shoulders", 3, 15, 20);
    CardioExercise* c2 = new CardioExercise("Cycling", "Exercise Bike", 20);
    CardioExercise* c3 = new CardioExercise("Climbing", "Stair Mill", 20);

    Member* m1 = new Member("Om Dharme", "9552601236", 67, "Trainer1");
//    m1->addExerciseToRoutine("Monday", s1);
//    m1->addExerciseToRoutine("Tuesday", c1);
//    m1->addExerciseToRoutine("Wednesday", s2);
//    m1->addExerciseToRoutine("Thursday", s3);
//    m1->addExerciseToRoutine("Friday", s4);
//    m1->addExerciseToRoutine("Saturday", c2);

    Member* m2 = new Member("Arya Parab", "3239746734", 50, "Trainer1");
//    m1->addExerciseToRoutine("Monday", c1);
//    m1->addExerciseToRoutine("Tuesday", c2);
//    m1->addExerciseToRoutine("Wednesday", c3);
//    m1->addExerciseToRoutine("Thursday", s2);
//    m1->addExerciseToRoutine("Friday", s4);
//    m1->addExerciseToRoutine("Saturday", s3);

    Trainer* t1 = new Trainer("Trainer1", "343242", "General");
    t1->addMember(m1);
    t1->addMember(m2);

    addExercise(s1);
    addExercise(s2);
    addExercise(s3);
    addExercise(s4);
    addExercise(c1);
    addExercise(c2);

    addMember(m1);
    addMember(m2);

    addTrainer(t1);

}

Trainer* Gym::getTrainerByName(string name) {
    for(auto trainer : this->trainers){
        if(trainer->getName() == name){
            return new Trainer(*trainer);
        }
    }
}

void Gym::addExerciseToMember(Member *m, string day, Exercise *exercise) {

    // Updating Members List
    for(auto member : this->members){
        if(member->getName() == m->getName()){
            member->addExerciseToRoutine(day, exercise);
            break;
        }
    }

    // Updating Trainers List
    for(auto trainer : this->trainers){
        if(trainer->getName() == m->getTrainerName()){
            trainer->addExerciseToMember(m->getName(), day, exercise);
            break;
        }
    }

}





