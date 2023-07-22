//
// Created by Om Dharme on 26/06/23.
//

#include "Trainer.h"

Trainer::Trainer(string name, string phoneNo, string type) : Person(name, phoneNo) {
    this->type = type;
}

Trainer::Trainer(const Trainer &trainer) : Person(trainer.name, trainer.phoneNo) {
    this->type = trainer.type;

    for(auto member : trainer.members){
        this->members.push_back(new Member(*member));
    }
}

void Trainer::print()
{
    cout<<"Name: " << this->name <<endl;
    cout<<"PhoneNo: " << this->phoneNo <<endl;
    cout<<"Type: " << this->type <<endl;

    for(auto member : this->members){
        member->print();
    }
}

string Trainer::getType() {
    return this->type;
}

void Trainer::setType(string type) {
    this->type = type;
}

void Trainer::addMember(Member *member) {
    this->members.push_back(new Member(*member));
}

vector<Member*> Trainer::getMembers(){
    vector<Member*> members;

    for(auto member : this->members){
        members.push_back(new Member(*member));
    }

    return members;
}

void Trainer::addExerciseToMember(string name, string day, Exercise *exercise) {

    for(auto member : this->members){
        if(member->getName() == name){
            member->addExerciseToRoutine(day, exercise);
            break;
        }
    }
}

Trainer::~Trainer(){
    this->members.clear();
}

