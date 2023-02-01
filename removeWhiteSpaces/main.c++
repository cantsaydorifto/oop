#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

bool isWhiteSpace(char ch) {
    return (ch == ' ' || ch == '\n' || ch == '\v' || ch == '\t' || ch == '\r');
}

int main() {
    string str;
    fstream f1;
    ofstream f2;
    f1.open("textFile.txt", ios::in);
    f2.open("newFile.txt");
    if (!f1.is_open()) {
        cout << "file cant be opened\n";
    }
    while (!f1.eof()) {
        getline(f1, str);
        str.erase(remove_if(str.begin(), str.end(), isWhiteSpace), str.end());
        f2 << str;
    }
    return 0;
}