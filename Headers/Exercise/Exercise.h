
#ifndef GYMMANAGEMENT_EXERCISE_H
#define GYMMANAGEMENT_EXERCISE_H

#include <iostream>

using namespace std;

class Exercise {
protected:
    string name;
    string type;
    string equipment;

public:
    Exercise(string name, string type, string equipment);
    virtual void print() = 0;
    virtual Exercise* getCopy() = 0;

    string getName();
    string getType();
    string getEquipment();

    void setName(string name);
    void setType(string type);
    void setEquipment(string equipment);
};


#endif //GYMMANAGEMENT_EXERCISE_H
