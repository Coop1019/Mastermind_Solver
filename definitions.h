//
// Created by Cooper LeComp on 7/19/16.
//

#ifndef MASTERMIND_SOLVER_DEFINITIONS_H
#define MASTERMIND_SOLVER_DEFINITIONS_H

int currentGuess=0;

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

struct digit{
    int A=1;
    int B=1;
    int C=1;
    int D=1;
    int E=1;
    int F=1;
    int color;
};

digit digit1;
digit digit2;
digit digit3;
digit digit4;

void generateRandomInitialStart(){
    srand(time(NULL));
    int x=0;
    int choice;
    while (x==0) {
        int choice = rand() % 6;
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
    int choice2 = rand() % 6;
    int choice3 = rand() % 6;
    int choice4 = rand() % 6;

    digit1.color = choice;
    digit2.color = choice2;
    digit3.color = choice3;
    digit4.color = choice4;


}
void getRed(){
    cout << "Red: \n";
    //cin >>
}

#endif //MASTERMIND_SOLVER_DEFINITIONS_H
