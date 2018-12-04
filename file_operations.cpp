#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool canBeOpened(string filename = "text.txt") {
    fstream file;
    file.open(filename, ios::in);

    if(file.good()) {
        file.close();
        return true;
    }
    else {
        file.close();
        return false;
    }
}

int getRows(string filename = "text.txt") {
    fstream file;
    string line;
    int rows = 0;
    
    file.open(filename, ios::in);

    while(getline(file,line)) {
        ++rows;
    }
    file.close();
    
    return rows;
}

string createTable(string filename = "text.txt") {
    fstream file;
    string line;

    string linesTable[getRows(filename)];

    file.open(filename,ios::in);

    return linesTable[];
}
int main() {
    
    cout<<canBeOpened("mod7.txt")<<endl;
    cout<<getRows("mod7.txt")<<endl;
    

    return 0;

}
