//
// Created by Om Dharme on 08/07/23.
//

#include "TrainerInterface.h"

bool addMemberInterface(Gym* gym, Member* member){

    gym->addMember(member);

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "Member Added!!!" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
    }
}

bool getMemberInfoInterface(Gym* gym, Trainer* trainer){

    while(true){
        string name, phoneNo;
        int age;

        system("clear");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: " << endl;
        getline(cin, name);
        cout << "Enter Phone No: " << endl;
        cin >> phoneNo;
        cout << "Enter Weight: " << endl;
        cin >> age;

        Member* newMember = new Member(name, phoneNo, age, trainer->getName());

        if(addMemberInterface(gym, newMember)) return true;
    }

}

bool addExerciseInterface(Gym* gym, Member* member, string day, Exercise* exercise){
    gym->addExerciseToMember(member, day ,exercise);

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "Exercise Added!!!" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
    }

}

bool chooseDayInterface(Gym* gym, Member* member, Exercise* exercise){

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

        if(choice == 0) return true;
        else if(choice == 1) return false;
        else if(choice == 2) {
            if(addExerciseInterface(gym, member, "Monday", exercise)) return true;
        }
    }

}

bool chooseExerciseInterface(Gym* gym, Member* member){

    while(true) {
        system("clear");

        cout << "0: Home" << endl;
        cout << "1: Back" << endl;

        vector<Exercise*> exercises = gym->getExercises();
        int option = 2;

        for(auto exercise : exercises){
            cout << option << ": " << exercise->getName() << endl;
            option++;
        }

        int choice;
        cin >> choice;

        if(choice == 0) return true;
        else if(choice == 1) return false;
        else if(choice >= 2 && choice <= exercises.size()+1){
            if(chooseDayInterface(gym, member, exercises[choice-2])) return true;
        }

    }

}

bool updateRoutineInterface(Gym* gym, Member* member){

    while(true) {
        system("clear");

        cout << "0: Home" << endl;
        cout << "1: Back" << endl;
        cout << "2: Add Exercise" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
        else if(choice == 1) return false;
        else if(choice == 2){
            if(chooseExerciseInterface(gym, member)) return true;
        }

    }

}

bool displayMemberInterface(Member* member){

    while(true){
        system("clear");

        cout << "0: Home" << endl;
        cout << "1: Back" << endl;

        member->print();

        int choice;
        cin >> choice;

        if(choice == 0) return true;
        else if(choice == 1) return false;
    }

}

bool accessedMemberInterface(Gym* gym, Member* member){

    while(true) {
        system("clear");
        cout << "0: Home" << endl;
        cout << "1: Back" << endl;
        cout << "2: Show Information" << endl;
        cout << "3: Update Routine" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
        else if(choice == 1) return false;
        else if(choice == 2){
            if(displayMemberInterface(member)) return true;
        }else if(choice == 3){
            if(updateRoutineInterface(gym, member)) return true;
        }
    }

}

bool accessMembersInterface(Gym* gym, Trainer* trainer){

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "1: Back" << endl;

        int i = 2;
        vector<Member*> members;

        for(auto t : gym->getTrainers()){
            if(t->getName() == trainer->getName()){
                members = t->getMembers();
            }
        }

        for(auto member : members){
            cout << i << ": " << member->getName() << endl;
            i++;
        }

        int choice;
        cin >> choice;

        if(choice == 0){
            return true;
        }else if(choice == 1) return false;
        else if(choice >= 2 && choice <= members.size() + 1){
            if(accessedMemberInterface(gym, members[choice-2])) return true;
        }
    }

}

bool trainerInterface(Gym* gym, Trainer* trainer){

    while(true){
        system("clear");

        cout << "0: Quit" << endl;
        cout << "1: Access Members" << endl;
        cout << "2: Add New Member" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return false;
        else if(choice == 1){
            accessMembersInterface(gym, trainer);
        }else if(choice == 2){
            getMemberInfoInterface(gym, trainer);
        }

    }

}

