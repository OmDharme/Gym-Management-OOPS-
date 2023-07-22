//
// Created by Om Dharme on 26/06/23.
//

#include "Exercise.h"

Exercise::Exercise(string name, string type, string equipment) {
    this->name = name;
    this->type = type;
    this->equipment = equipment;
}

string Exercise::getName() {
    return this->name;
}

string Exercise::getType() {
    return this->type;
}

string Exercise::getEquipment(){
    return this->equipment;
}

void Exercise::setName(string name) {
    this->name = name;
}

void Exercise::setType(string type) {
    this->type = type;
}

void Exercise::setEquipment(string equipment) {
    this->equipment = equipment;
}