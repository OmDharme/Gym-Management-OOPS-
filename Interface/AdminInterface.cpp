//
// Created by Om Dharme on 15/07/23.
//

#include "AdminInterface.h"

bool addTrainerInterface(Gym* gym, Trainer* trainer){

    gym->addTrainer(trainer);

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "Trainer Added!!!" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
    }
}

bool getTrainerInfoInterface(Gym* gym){

    while(true){
        string name, phoneNo, type;

        system("clear");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: " << endl;
        getline(cin, name);
        cout << "Enter Phone No: " << endl;
        cin >> phoneNo;
        cout << "Enter Type: " << endl;
        cin >> type;

        Trainer* newTrainer = new Trainer(name, phoneNo, type);

        if(addTrainerInterface(gym, newTrainer)) return true;
    }

}

bool addExerciseInterface(Gym* gym, Exercise* exercise){

    gym->addExercise(exercise);

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "Exercise Added!!!" << endl;

        int choice;
        cin >> choice;

        if(choice == 0) return true;
    }
}

bool getStrengthExerciseInfoInterface(Gym* gym){

    while(true){
        string name, equipment, bodyPart;
        int numSets, numReps, avgTime;

        system("clear");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: " << endl;
        getline(cin, name);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Equipment: " << endl;
        getline(cin, equipment);
        cout << "Enter Body Part: " << endl;
        cin >> bodyPart;
        cout << "Enter Number of Sets: " << endl;
        cin >> numSets;
        cout << "Enter Number of Reps: " << endl;
        cin >> numReps;
        cout << "Enter Average Time: " << endl;
        cin >> avgTime;


        StrengthExercise* s = new StrengthExercise(name, equipment, bodyPart, numSets, numReps, avgTime);

        if(addExerciseInterface(gym, s)) return true;
    }

}

bool getCardioExerciseInfoInterface(Gym* gym){

    while(true){
        string name, equipment;
        int time;

        system("clear");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: " << endl;
        getline(cin, name);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Equipment: " << endl;
        getline(cin, equipment);
        cout << "Enter Time: " << endl;
        cin >> time;


        CardioExercise* c = new CardioExercise(name, equipment, time);

        if(addExerciseInterface(gym, c)) return true;
    }

}

bool chooseExerciseTypeInterface(Gym* gym){

    while(true){
        system("clear");
        cout << "0: Home" << endl;
        cout << "1: Back" << endl;
        cout << "2: Strength" << endl;
        cout << "3: Cardio" << endl;

        int choice;
        cin >> choice;

        if(choice == 0){
            return true;
        }else if(choice == 1){
            return false;
        }else if(choice == 2){
            if(getStrengthExerciseInfoInterface(gym)) return true;
        }else if(choice == 3){
            if(getCardioExerciseInfoInterface(gym)) return true;
        }
    }

}

bool adminInterface(Gym* gym){

    while(true){
        system("clear");
        cout << "0: Quit" << endl;
        cout << "1: Add Trainer" << endl;
        cout << "2: Add Exercise" << endl;

        int choice;
        cin >> choice;

        if(choice == 0){
            return false;
        }
        else if(choice == 1){
            getTrainerInfoInterface(gym);
        }else if(choice == 2){
            chooseExerciseTypeInterface(gym);
        }

    }

}