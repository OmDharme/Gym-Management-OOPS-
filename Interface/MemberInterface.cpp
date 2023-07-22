//
// Created by Om Dharme on 06/07/23.
//

#include "MemberInterface.h"
#include "map"
using namespace std;

bool displayTrainerInterface(Trainer* t){
    system("clear");

    cout << "0: Home" << endl;
    cout << "1: Back" << endl;

    cout << endl;

    cout << "Name: " <<  t->getName() << endl;
    cout << "Phone No: " <<  t->getPhoneNo() << endl;
    cout << "Type: " <<  t->getType() << endl;

    int choice;
    cin >> choice;

    if(choice == 0){
        return true;
    }else if(choice == 1){
        return false;
    }
}

bool displayRoutineInterface(Routine* routine, string day){

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "1: Back" << endl;
        routine->printExercisesOfDay(day);

        int choice;
        cin >> choice;

        if(choice == 0){
            return true;
        }else if(choice == 1){
            return false;
        }
    }

}

bool routineInterface(Routine* routine){

    while(true) {
        system("clear");
        cout << "0: Home" << endl;
        cout << "1: Back" << endl;
        cout << "2: Monday" << endl;
        cout << "3: Tuesday" << endl;
        cout << "4: Wednesday" << endl;
        cout << "5: Thursday" << endl;
        cout << "6: Friday" << endl;
        cout << "7: Saturday" << endl;

        int choice;
        cin >> choice;

        map<int, string> m;
        m.insert({2, "Monday"});
        m.insert({3, "Tuesday"});
        m.insert({4, "Wednesday"});
        m.insert({5, "Thursday"});
        m.insert({6, "Friday"});
        m.insert({7, "Saturday"});

        if (choice == 0) {
            return true;
        } else if (choice == 1) {
            return false;
        } else if (choice >= 2 & choice <= 7) {
            if (displayRoutineInterface(routine, m[choice])) return true;
        }
    }

}

bool memberInterface(Gym* gym, Member* member){

    while(true){
        system("clear");
        int choice;

        cout << "0: Quit" << endl;
        cout << "1: Get Trainer Info" << endl;
        cout << "2: Get Routine" << endl;

        cin >> choice;

        if(choice == 0){
            return false;
        }else if(choice == 1){
            Trainer* trainer = gym->getTrainerByName(member->getTrainerName());
            displayTrainerInterface(trainer);
            delete trainer;
        }else if(choice == 2){
            Routine* routine = member->getRoutine();
            routineInterface(routine);
            delete routine;
        }
    }

}