//
// Created by Cooper LeComp on 7/19/16.
//

#ifndef MASTERMIND_SOLVER_DEFINITIONS_H
#define MASTERMIND_SOLVER_DEFINITIONS_H

struct partOfGuess{
    int color=0; // 1=Pink, 2=Orange, 3=Yellow, 4=Green, 5=Blue, 6=Purple
};
struct guess{
    int _1;
    int _2;
    int _3;
    int _4;
};

int dig_1 = 1;
int dig_2 = 1;
int dig_3 = 1;
int dig_4 = 1;

int numCounter=0;
guess allGuesses[1296];

void generateNumberSet() {

        for (int d1 = 1; d1<7; d1++){
            for (int d2 = 1; d2<7; d2++){
                for (int d3 = 1; d3<7; d3++){
                    for (int d4 = 1; d4<7;d4++){
                        allGuesses[numCounter]._1=d1;
                        allGuesses[numCounter]._2=d2;
                        allGuesses[numCounter]._3=d3;
                        allGuesses[numCounter]._4=d4;

                        cout << allGuesses[numCounter]._1 << allGuesses[numCounter]._2 << allGuesses[numCounter]._3 << allGuesses[numCounter]._4 <<endl;


                        numCounter++;
                    }
                }
            }
        }


}

void generateRandomInitialStart(){
    srand(time(NULL));
    int choice = rand() % 1296;
    cout << allGuesses[choice]._1 << allGuesses[choice]._2 << allGuesses[choice]._3 << allGuesses[choice]._4 << endl;
}
#endif //MASTERMIND_SOLVER_DEFINITIONS_H
