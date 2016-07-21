#include <iostream>
#include <fstream>


using namespace std;

#include "definitions.h"

int main() {
    int done = 0;
    openFile();
    while (done==0) {
        done = generateSemiRandomGuess();
    }


    return 0;
}

