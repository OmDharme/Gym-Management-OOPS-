//
// Created by Om Dharme on 15/07/23.
//

#include "MainInterface.h"

bool mainInterface(Gym* gym){

    while(true){
        system("clear");

        cout << "0: Quit" << endl;
        cout << "1: Admin" << endl;
        cout << "2: Trainer" << endl;
        cout << "3: Member" << endl;

        int choice;
        cin >> choice;

        if(choice == 0){
            return false;
        }else if(choice == 1){
            adminInterface(gym);
        }else if(choice == 2){
            Trainer* trainer = gym->getTrainers()[0];
            trainerInterface(gym, trainer);
        }else if(choice == 3){
            Member* member = gym->getMembers()[0];
            memberInterface(gym, member);
        }
    }

}
