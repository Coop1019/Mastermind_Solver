//
// Created by Cooper LeComp on 7/19/16.
//

#ifndef MASTERMIND_SOLVER_DEFINITIONS_H
#define MASTERMIND_SOLVER_DEFINITIONS_H

#include "fileLogger.h"


int currentGuess=0;

int counter = 0;

struct partOfGuess{
    int color=0; // 1=Pink, 2=Orange, 3=Yellow, 4=Green, 5=Blue, 6=Purple
};
struct guess{
    int _1;
    int _2;
    int _3;
    int _4;
    int whiteCorrectColor;
    int redCorrectColorandPlacement;
};

struct levelGuess{
    struct guess *numbersChosen;
    int whiteCorrectColor;
    int redCorrectColorandPlacement;
};

int getRed();
void getWhite();


struct digit{
    int A=1;
    int B=1;
    int C=1;
    int D=1;
    int E=1;
    int F=1;
    int color;
};

int choice;
int choice2;
int choice3;
int choice4;

digit digit1;
digit digit2;
digit digit3;
digit digit4;

int generateSequence(){
    srand(time(NULL));
    int x=0;

    while (x==0) {
        choice = (rand() % 6)+1;
        if (choice==1){
            if (digit1.A==1){
                x=1;
            }
        }
        if (choice==2){
            if (digit1.B==1){
                x=1;
            }
        }
        if (choice==3){
            if (digit1.C==1){
                x=1;
            }
        }
        if (choice==4){
            if (digit1.D==1){
                x=1;
            }
        }
        if (choice==5){
            if (digit1.E==1){
                x=1;
            }
        }
        if (choice==6){
            if (digit1.F==1){
                x=1;
            }
        }
    }
    x=0;
    while (x==0) {
        choice2 = (rand() % 6)+1;
        if (choice2==1){
            if (digit2.A==1){
                x=1;
            }
        }
        if (choice2==2){
            if (digit2.B==1){
                x=1;
            }
        }
        if (choice2==3){
            if (digit2.C==1){
                x=1;
            }
        }
        if (choice2==4){
            if (digit2.D==1){
                x=1;
            }
        }
        if (choice2==5){
            if (digit2.E==1){
                x=1;
            }
        }
        if (choice2==6){
            if (digit2.F==1){
                x=1;
            }
        }
    }
    x=0;
    while (x==0) {
        choice3 = (rand() % 6)+1;
        if (choice3==1){
            if (digit3.A==1){
                x=1;
            }
        }
        if (choice3==2){
            if (digit3.B==1){
                x=1;
            }
        }
        if (choice3==3){
            if (digit3.C==1){
                x=1;
            }
        }
        if (choice3==4){
            if (digit3.D==1){
                x=1;
            }
        }
        if (choice3==5){
            if (digit3.E==1){
                x=1;
            }
        }
        if (choice3==6){
            if (digit3.F==1){
                x=1;
            }
        }
    }
    x=0;
    while (x==0) {
        choice4 = (rand() % 6)+1 ;

        if (choice4==1){
            if (digit4.A==1){
                x=1;
            }
        }
        if (choice4==2){
            if (digit4.B==1){
                x=1;
            }
        }
        if (choice4==3){
            if (digit4.C==1){
                x=1;
            }
        }
        if (choice4==4){
            if (digit4.D==1){
                x=1;
            }
        }
        if (choice4==5){
            if (digit4.E==1){
                x=1;
            }
        }
        if (choice4==6){
            if (digit4.F==1){
                x=1;
            }
        }
    }

    digit1.color = choice;
    digit2.color = choice2;
    digit3.color = choice3;
    digit4.color = choice4;
    writeNumbertoFile(choice,choice2,choice3,choice4);

}

int generateSemiRandomGuess(){

    int shouldIGoAgain = 1;
    while (shouldIGoAgain==1) {
        generateSequence();
        shouldIGoAgain = readFromFile(choice, choice2, choice3, choice4);


        cout << "Guess: " << digit1.color << digit2.color << digit3.color << digit4.color << endl;
        counter++;

        int redReturned = getRed();
        if (redReturned == 1) {
            cout << "I won in " << counter << " moves!\n";
            return 1;
        }
        if (redReturned == 0) {
            getWhite();
        }
        return 0;
    }


}
int getRed(){
    int redColors;
    cout << "Red: \n";
    cin >> redColors;
    if (redColors==4){
        return 1;
    }
    if (redColors==3){
        return 2;
    }
    if (redColors==2){
        return 2;
    }
    if (redColors==1){
        return 2;
    }
    if (redColors==0){
        if (digit1.color==1){
            digit1.A=0; }
        if (digit1.color==2){
            digit1.B=0; }
        if (digit1.color==3){
            digit1.C=0; }
        if (digit1.color==4){
            digit1.D=0; }
        if (digit1.color==5){
            digit1.E=0; }
        if (digit1.color==6){
            digit1.F=0; }

        if (digit2.color==1){
            digit2.A=0; }
        if (digit2.color==2){
            digit2.B=0; }
        if (digit2.color==3){
            digit2.C=0; }
        if (digit2.color==4){
            digit2.D=0; }
        if (digit2.color==5){
            digit2.E=0; }
        if (digit2.color==6){
            digit2.F=0; }

        if (digit3.color==1){
            digit3.A=0; }
        if (digit3.color==2){
            digit3.B=0; }
        if (digit3.color==3){
            digit3.C=0; }
        if (digit3.color==4){
            digit3.D=0; }
        if (digit3.color==5){
            digit3.E=0; }
        if (digit3.color==6){
            digit3.F=0; }

        if (digit4.color==1){
            digit4.A=0; }
        if (digit4.color==2){
            digit4.B=0; }
        if (digit4.color==3){
            digit4.C=0; }
        if (digit4.color==4){
            digit4.D=0; }
        if (digit4.color==5){
            digit4.E=0; }
        if (digit4.color==6){
            digit4.F=0; }
    }
    return 0;
}

void getWhite(){
    int whiteColors;
    cout << "White: \n";
    cin >> whiteColors;
    if (whiteColors == 0){
        if (digit1.color==1){
            digit1.A=0;
            digit2.A=0;
            digit3.A=0;
            digit4.A=0;}
        if (digit1.color==2){
            digit1.B=0;
            digit2.B=0;
            digit3.B=0;
            digit4.B=0;}
        if (digit1.color==3){
            digit1.C=0;
            digit2.C=0;
            digit3.C=0;
            digit4.C=0;}
        if (digit1.color==4){
            digit1.D=0;
            digit2.D=0;
            digit3.D=0;
            digit4.D=0; }
        if (digit1.color==5){
            digit1.E=0;
            digit2.E=0;
            digit3.E=0;
            digit4.E=0;}
        if (digit1.color==6){
            digit1.F=0;
            digit2.F=0;
            digit3.F=0;
            digit4.F=0;}

        if (digit2.color==1){
            digit1.A=0;
            digit2.A=0;
            digit3.A=0;
            digit4.A=0;}
        if (digit2.color==2){
            digit1.B=0;
            digit2.B=0;
            digit3.B=0;
            digit4.B=0;}
        if (digit2.color==3){
            digit1.C=0;
            digit2.C=0;
            digit3.C=0;
            digit4.C=0;}
        if (digit2.color==4){
            digit1.D=0;
            digit2.D=0;
            digit3.D=0;
            digit4.D=0; }
        if (digit2.color==5){
            digit1.E=0;
            digit2.E=0;
            digit3.E=0;
            digit4.E=0;}
        if (digit2.color==6){
            digit1.F=0;
            digit2.F=0;
            digit3.F=0;
            digit4.F=0;}

        if (digit3.color==1){
            digit1.A=0;
            digit2.A=0;
            digit3.A=0;
            digit4.A=0;}
        if (digit3.color==2){
            digit1.B=0;
            digit2.B=0;
            digit3.B=0;
            digit4.B=0;}
        if (digit3.color==3){
            digit1.C=0;
            digit2.C=0;
            digit3.C=0;
            digit4.C=0;}
        if (digit3.color==4){
            digit1.D=0;
            digit2.D=0;
            digit3.D=0;
            digit4.D=0; }
        if (digit3.color==5){
            digit1.E=0;
            digit2.E=0;
            digit3.E=0;
            digit4.E=0;}
        if (digit3.color==6){
            digit1.F=0;
            digit2.F=0;
            digit3.F=0;
            digit4.F=0;}

        if (digit4.color==1){
            digit1.A=0;
            digit2.A=0;
            digit3.A=0;
            digit4.A=0;}
        if (digit4.color==2){
            digit1.B=0;
            digit2.B=0;
            digit3.B=0;
            digit4.B=0;}
        if (digit4.color==3){
            digit1.C=0;
            digit2.C=0;
            digit3.C=0;
            digit4.C=0;}
        if (digit4.color==4){
            digit1.D=0;
            digit2.D=0;
            digit3.D=0;
            digit4.D=0; }
        if (digit4.color==5){
            digit1.E=0;
            digit2.E=0;
            digit3.E=0;
            digit4.E=0;}
        if (digit4.color==6){
            digit1.F=0;
            digit2.F=0;
            digit3.F=0;
            digit4.F=0;}
    }
}

#endif //MASTERMIND_SOLVER_DEFINITIONS_H
