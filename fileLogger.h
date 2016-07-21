//
// Created by Cooper LeComp on 7/20/16.
//

#ifndef MASTERMIND_SOLVER_FILELOGGER_H
#define MASTERMIND_SOLVER_FILELOGGER_H


ofstream logFile;
ifstream readFile;

void openFile(){
    logFile.open("log.afm2");
    readFile.open("log.afm2");
}

void writeNumbertoFile(int a, int b, int c, int d){
    logFile << a << b << c << d <<endl;
}

int readFromFile(int a, int b, int c, int d){
    string aString=to_string(a);
    string bString=to_string(b);
    string cString=to_string(c);
    string dString=to_string(d);
    string combinedStrings;
    combinedStrings =  aString + bString + cString + dString;

    string line;
    while (getline (readFile,line) ) {
        cout<<"Line: "<<line<<endl;
        if (line == combinedStrings) {
            return 1;
        }
    }
    return 0;

}

#endif //MASTERMIND_SOLVER_FILELOGGER_H
