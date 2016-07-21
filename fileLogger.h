//
// Created by Cooper LeComp on 7/20/16.
//

#ifndef MASTERMIND_SOLVER_FILELOGGER_H
#define MASTERMIND_SOLVER_FILELOGGER_H


ofstream logFile;
ifstream readFile;

void openFile(){
    std::ofstream wipe;
    wipe.open("log.afm2", std::ofstream::out | std::ofstream::trunc);
    wipe.close();

}

void writeNumbertoFile(int a, int b, int c, int d){
    logFile.open("log.afm2",std::ios_base::app);
    logFile << a << b << c << d <<endl;
    logFile.close();
}

int readFromFile(int a, int b, int c, int d){
    readFile.open("log.afm2");
    string aString=to_string(a);
    string bString=to_string(b);
    string cString=to_string(c);
    string dString=to_string(d);
    string combinedStrings;
    combinedStrings =  aString + bString + cString + dString;

    string line;
    cout << "I made it here" << endl;
    while (getline (readFile,line) ) {
        cout << "I made it here too" << endl;
        cout<<"Line: "<<line<<endl;
        if (line == combinedStrings) {
            readFile.close();
            return 1;
        }
    }
    readFile.close();
    return 0;

}

#endif //MASTERMIND_SOLVER_FILELOGGER_H
